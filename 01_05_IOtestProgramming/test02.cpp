// �̸��� ��ȭ��ȣ�� ���ڿ��� �Է� �ް� �ٷ� ���

#include<iostream>

int main(void) {
	char name[100];
	char phoneNum[100];

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	std::cin >> phoneNum;

	std::cout << "�̸�: " << name << std::endl;
	std::cout << "��ȭ��ȣ: " << phoneNum << std::endl;

	return 0;
}