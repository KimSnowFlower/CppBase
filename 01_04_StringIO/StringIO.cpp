#include<iostream>

int main(void) {
	// �Է� ���� name, lang ���� �ʱ�ȭ
	char name[200];
	char lang[200];

	// std::cin�� >> �����ڸ� ����Ͽ� �Է� �ޱ�
	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	// std::cin�� >> �����ڸ� ����Ͽ� �Է� �ޱ�
	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�" << std::endl;
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;

	return 0; 
}