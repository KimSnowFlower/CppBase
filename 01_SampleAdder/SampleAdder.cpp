#include<iostream>

int main(void) {
	int val1;

	//std::cin와 >> 연사자를 이용한 입력
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;

	int val2;

	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	// 입력 값을 또 하나의 변수에 저장 후 출력
	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	return 0;
}