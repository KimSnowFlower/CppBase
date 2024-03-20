// 함수호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하다!!
#include<iostream>

void MyFunc(void) {
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void) {
	// 함수명이 동일하다면 매개변수에 따른 함수 호출 == 함수 오버로딩
	MyFunc();		// MyFunc(void) 호출
	MyFunc('A');	// MyFunc(char c) 호출
	MyFunc(3,5);	// MyFunc(int a, int b) 호출

	return 0;
}