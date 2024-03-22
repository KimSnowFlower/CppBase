//C언어 복습 코드

// const는 무엇인가?
// const == 상수
// 상수는 뭔데? -> 절대 변하지 않는 값을 뜻 
// 상수는 처음 선언할 때만 값을 할당할 수 있고 그 다음부터는 값을 변경할 수 없음
// 아래 방법들은 const에 대한 사용 방법이다.
#include<iostream>
using namespace std;

class ConstExample {
	const int num;

	ConstExample() : num(3) {
		//num = 3; 에러
	}// 정상

	// const 멤버 함수, 이 안에 값은 변경이 불가능
	void print() const {};
};

// 파라미터 값을 읽기만 가능하고 변경이 불가능하다
int Function(const int num1, const int num2) {
	return 10;
}

int main() {
	int val1 = 10, val2 = 11, val3 = 12;

	// 변수 num을 상수화
	const int num = 10;

	// 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음 단,val1의 값은 변경 가능
	const int* ptr1 = &val1;
	val1 = 20;

	// 포인터 ptr2가 상수화 됨 단, ptr의 주소 값을 값을 바꾸는 것은 불가능
	int* const ptr2 = &val2;
	*ptr2 = 3; // 정상
	//ptr2 = &val; 에러

	// 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음
	const int* const ptr3 = &val3;
	//*ptr3 = 3;   에러
	//ptr3 = &val; 에러

	cout << num << " " << ptr1 << " " << ptr2 << " " << ptr3 << endl;

	int num1 = Function(1,2);
	const int num2 = Function(1, 2);

	num1 = 30;
	// num2 = 30; 에러
	return 0;
}