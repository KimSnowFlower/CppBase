//Default Value��?
//�Լ�ȣ�� �� ���ڸ� �������� �ʾƵ� �ʱ�ȭ �ϴ� ���
//void func(int a=7)
//����Ʈ ���� �Լ��� �����ϴ� �κ� �ѹ��� �ʱ�ȭ �Ѵ�.

#include<iostream>

// �Լ� ����
//int Adder(int num1 = 1, int num2 = 2);

// �Լ� ����
int Adder(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}

//�κ��� ����Ʈ �� ����
//�Լ��� ���޵Ǵ� ���ڴ� ���ʺ��� ä������ ������ ����Ʈ ���� ���� �Ű��������� ä���� �Ѵ�.
//Adder(int num1 = 1, int num2) ����
//Adder(int num1, int num2 = 1) ����

int main() {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

//������ ��
// int func(int a=10)�� int func() ó�� 2���� �Լ��� ������ ��� ����
// �� ������?
// ���ڰ� ���� �Լ��� ȣ�� �� ���
// ����Ʈ �� ������ 2�� �Լ��� �� ȣ�� �����ϱ� ������ ȣ���� ��ȣ������.