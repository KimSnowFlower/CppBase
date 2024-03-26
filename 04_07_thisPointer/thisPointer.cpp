// this 포인터의 이해
// this : 객체 자신을 가리키는 용도

#include<iostream>
#include<cstring>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		// this->를 사용하면 해당 객체의 멤버 변수 혹은 멤버 함수를 가리켜서 사용할 수 있다.
		// 좋은 점은 만약 매개변수와 이름이 똑같아서 헷갈리는 일을 줄인다.
		cout << "num= " << this->num << ", ";
		cout << "address= " << this << endl; // 객체 자신을 가리킴
	}

	void ShowSimpleData() {
		cout << num << endl;
	}

	// 객체 자신의 주조를 가리킴
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main() {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 객체의 주소 값 저장

	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer(); // sim1 객체의 주소 값 저장

	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}