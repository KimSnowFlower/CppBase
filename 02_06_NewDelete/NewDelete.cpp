// new & delete
// new -> malloc , free -> delete

// new
// int�� ������ �Ҵ� : int *ptr = new int;
// double�� ������ �Ҵ� : double *ptr2 = new double;
// �迭 ������ �Ҵ� : int/double *arr1 = new int/double[N];

// delete
// �Ҵ��� int�� ������ �Ҹ� : delete ptr1;
// �Ҵ��� double ������ �Ҹ� : double ptr2;
// �Ҵ��� �迭�� �Ҹ� : double []arr1;
#pragma warning(disable : 4996)
#include<iostream>
#include<string.h>
using namespace std;

// new & delete ��ü ����
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

	// new&delete �� malloc&free ������
	cout << "case1 : ";
	Simple* sp1 = new Simple;

	cout << "case2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;

	delete sp1;
	free(sp2);

	return 0;
}