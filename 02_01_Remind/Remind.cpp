//C언어 복습 코드

// const는 무엇인가?
// const == 상수
// 상수는 뭔데? -> 절대 변하지 않는 값을 뜻 
// 상수는 처음 선언할 때만 값을 할당할 수 있고 그 다음부터는 값을 변경할 수 없음
#include<iostream>
using namespace std;

int main() {
	int val1 = 10, val2 = 11, val3 = 12;
	
	// 변수 num을 상수화
	const int num = 10;

	// 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음
	const int* ptr1 = &val1;

	// 포인터 ptr2가 상수화 됨
	int* const ptr2 = &val2;

	// 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음
	const int* const ptr3 = &val3;

	cout << num << " " << ptr1 << " " << ptr2 << " " << ptr3 << endl;
	return 0;
}