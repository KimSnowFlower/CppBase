// �Լ�ȣ�� �� ���޵Ǵ� ���ڸ� ���ؼ� ȣ���ϰ��� �ϴ� �Լ��� ������ �����ϴ�!!
#include<iostream>

void MyFunc(void) {
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void) {
	// �Լ����� �����ϴٸ� �Ű������� ���� �Լ� ȣ�� == �Լ� �����ε�
	MyFunc();		// MyFunc(void) ȣ��
	MyFunc('A');	// MyFunc(char c) ȣ��
	MyFunc(3,5);	// MyFunc(int a, int b) ȣ��

	return 0;
}