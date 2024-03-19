// 5개의 정수를 입력 받아 총합을 만드는 프로그램

#include<iostream>

int main(void) {
	int num, result = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> num;
		result += num;
	}

	std::cout << "합계: " << result << std::endl;

	return 0;
}