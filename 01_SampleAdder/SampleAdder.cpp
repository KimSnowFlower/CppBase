#include<iostream>

int main(void) {
	int val1;

	//std::cin�� >> �����ڸ� �̿��� �Է�
	std::cout << "ù ��° �����Է�: ";
	std::cin >> val1;

	int val2;

	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	// �Է� ���� �� �ϳ��� ������ ���� �� ���
	int result = val1 + val2;
	std::cout << "�������: " << result << std::endl;

	return 0;
}