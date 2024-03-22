// value vs reference
// 값에 의한 호출 vs 참조에 의한 호출
// 01_06_FunctionOverloading에서 한번 다룸
// 간단하게 다시 개념 정리
#include<iostream>
using namespace std;

// call-by-value
// 파라미터를 받아서 해당 함수 안에서만 값이 변경 됨
void SwapByValue(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// call-by-reference
// 파라미터를 포인터로 받기 때문에 해당 매개변수의 주소로 가서 데이터를 변경함
void SwapByRef(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int val1 = 10, val2 = 20;

	SwapByValue(val1, val2);
	cout << val1 << " " << val2 << endl;

	//call-by-reference는 항상 & 참조를 매개변수로 보냄
	SwapByRef(&val1, &val2);
	cout << val1 << " " << val2 << endl;

	return 0;
}