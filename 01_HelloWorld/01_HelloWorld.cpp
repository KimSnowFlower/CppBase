#include<iostream> 
// 헤더파일 선언문
// 새로운 표준 라이브러리의 사용을 목적으로 하는 헤더파일의 포함에는 확장자를 생략하기로 함.
// - 과거의 표준 라이브러리와 새로운 표준 라이브러리의 구분 함.
// - 새로운 표준 라이브러리를 사용하는 형태로 소스코드를 쉽게 변경할 수 있도록 함.

int main(void) {
	int num = 20;

	// std::cout과 << 연사자를 이용한 출력
	// std::endl은 개행 문자
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello" << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}