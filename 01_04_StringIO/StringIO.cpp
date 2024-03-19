#include<iostream>

int main(void) {
	// 입력 받을 name, lang 변수 초기화
	char name[200];
	char lang[200];

	// std::cin과 >> 연산자를 사용하여 입력 받기
	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	// std::cin과 >> 연산자를 사용하여 입력 받기
	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다" << std::endl;
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

	return 0; 
}