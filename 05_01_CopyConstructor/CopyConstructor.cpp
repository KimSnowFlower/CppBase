// 복사생성자
// 한 객체의 내용을 다른 객체로 복사하여 생성된 생성자
// 특징
// 1. 자신과 같은 타입의 객체를 인자로 받는다
// 2. 복사 생성자가 정의되어 있지 않다면, 디폴트 복사 생성자가 생성된다. -> 굳이 복상 생성자를 생성하지 않아도 된다 이건가?

#include<iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {
		
	}

	// 매개변수로 객체를 받고 그 객체의 값으로 초기화
	// const를 사용하는 이유는 객체의 값이 바뀔 수 있기 때문에 const로 매개변수를 받는 것이 좋다.
	SoSimple(const SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main() {
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;

	SoSimple sim2 = sim1;// 동일 클래스 객체로 초기화!!
	// SoSimple sim2 = sim1 <==> SoSimple sim2(sim1)
	// 복사생성자는 묵시적으로 호출된 것으로 볼 수 있다.

	// 묵시적 호출을 막으려면 복사 생성자 앞에 explicit 키워드를 사용하면 묵시적 호출을 하지 않는다.
	// 대신 위 코드처럼 객체 생성 불가
	// explicit는 SoSimple sim2(sim1) 복사 생성자 호출
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}