// 입력한 숫자에 구구단 출력 프로그램

#include<iostream>

int main(void) {
	int n;

	std::cout << "정수를 입력하시오: ";
	std::cin >> n;

	for (int i = 1; i <= 9; i++)
		std::cout << n << "*" << i << ":" << i * n << std::endl;

	return 0;
}