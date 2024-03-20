//Default Value란?
//함수호출 시 인자를 전달하지 않아도 초기화 하는 방법
//void func(int a=7)
//디폴트 값은 함수를 선언하는 부분 한번만 초기화 한다.

#include<iostream>

// 함수 선언
//int Adder(int num1 = 1, int num2 = 2);

// 함수 정의
int Adder(int num1 = 1, int num2 = 2) {
	return num1 + num2;
}

//부분적 디폴트 값 설정
//함수에 전달되는 인자는 왼쪽부터 채워지기 때문에 디폴트 값은 왼쪽 매개변수부터 채워야 한다.
//Adder(int num1 = 1, int num2) 오류
//Adder(int num1, int num2 = 1) 실행

int main() {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

//조심할 점
// int func(int a=10)과 int func() 처럼 2개의 함수가 존재할 경우 오류
// 그 이유는?
// 인자가 없는 함수를 호출 할 경우
// 디폴트 값 때문에 2개 함수가 다 호출 가능하기 때문에 호출이 모호해진다.