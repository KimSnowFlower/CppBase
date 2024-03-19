#include<iostream>

int main(void) {
	int val1, val2;
	int result = 0;

	// 첫번째 정수와 두번째 정수의 경계는 탭, 스페이스 바, Enter 키의 입력과 같은 공백에 의해 나눠진다.
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	else
		for (int i = val2 + 1; i < val1; i++)
			result += i;

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;

	return 0;
}