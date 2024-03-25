// new & delete
// new -> malloc , free -> delete

// new
// int형 변수의 할당 : int *ptr = new int;
// double형 변수의 할당 : double *ptr2 = new double;
// 배열 변수의 할당 : int/double *arr1 = new int/double[N];

// delete
// 할당한 int형 변수의 소멸 : delete ptr1;
// 할당한 double 변수의 소멸 : double ptr2;
// 할당한 배열의 소멸 : double []arr1;
#pragma warning(disable : 4996)
#include<iostream>
#include<string.h>
using namespace std;

// new & delete 객체 연습
class Simple {
public:
	Simple() {
		cout << "I'm Simple constructor!" << endl;
	}
};

char* MakeStrAdr(int len) {
	char* str = new char[len];

	return str;
}

int main() {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;

	delete[]str;

	// new&delete 와 malloc&free 차이점
	cout << "case1 : ";
	Simple* sp1 = new Simple;

	cout << "case2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;

	delete sp1;
	free(sp2);

	return 0;
}