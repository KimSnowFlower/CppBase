// 5���� ������ �Է� �޾� ������ ����� ���α׷�

#include<iostream>

int main(void) {
	int num, result = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "��° ���� �Է�: ";
		std::cin >> num;
		result += num;
	}

	std::cout << "�հ�: " << result << std::endl;

	return 0;
}