// 참조자 Reference
// 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름!! == 별칭
// 참조자의 수에는 제한이 없고, 참조자를 대상으로도 참조자를 선언 가능
// 참조자는 변수에 대해서만 선언 가능
// int *ptr = &num1 : 변수 num1의 주소 값을 반환해서 포인터 ptr에 저장
// int &num2 = num1 : 변수 num1에 대한 참조자 num2를 선언해라

#include<iostream>
using namespace std;

int main() {
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}