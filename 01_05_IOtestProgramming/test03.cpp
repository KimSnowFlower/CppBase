// �Է��� ���ڿ� ������ ��� ���α׷�

#include<iostream>

int main(void) {
	int n;

	std::cout << "������ �Է��Ͻÿ�: ";
	std::cin >> n;

	for (int i = 1; i <= 9; i++)
		std::cout << n << "*" << i << ":" << i * n << std::endl;

	return 0;
}