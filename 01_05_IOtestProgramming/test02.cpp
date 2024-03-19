// 이름과 전화번호를 문자열로 입력 받고 바로 출력

#include<iostream>

int main(void) {
	char name[100];
	char phoneNum[100];

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "전화번호를 입력하세요: ";
	std::cin >> phoneNum;

	std::cout << "이름: " << name << std::endl;
	std::cout << "전화번호: " << phoneNum << std::endl;

	return 0;
}