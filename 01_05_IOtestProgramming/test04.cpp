// 무한 급여 출력 프로그램

#include<iostream>

int main(void) {
	int num = 0;

	while (num != -1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> num;

		if (num != -1)
			std::cout << "이번 달 급여: " << 50 + num * 0.12 << "만원" << std::endl;
		else
			std::cout << "프로그램을 종료합니다." << std::endl;
	}

	return 0;
}