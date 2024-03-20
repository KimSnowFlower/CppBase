// call by address란?
// 매개변수를 포인터로 주고 함수 호출 시 해당 매개변수의 주소를 전달
// void func(int *ptr) { *ptr *= 2; }
// main () { int num = 3; func(&num); }

// call by reference란?
// 매개변수를 참조형 변수로 주고 함수 호출 시 lvalue를 전달
// void func(int& a) { a *= 2; }
// main () { int num = 3; func(num); }

// call by value란?
// 매개변수에 타입에 따라 값을 전달
// void func(int a) { a *= 2; }
// main () { int num = 3; func(num); }

// call by address		func(타입 *a) func(&num)
// call by reference	func(타입& a) func(num)
// call by value		func(타입 a)  func(a)
#include<iostream>

// call by address	
void Swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// call by reference
void Swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}

// call by value
void Swap(double a, double b) {
	double temp = a;
	a = b;
	b = temp;

	std::cout << a << " " << b << std::endl;
}

int main() {
	// call by address 구조를 사용
	int num1 = 20, num2 = 30;
	Swap(&num1, &num2);
	std::cout << num1 << " " << num2 << std::endl;

	// call by reference 구조를 사용
	char ch1 = 'a', ch2 = 'b';
	Swap(ch1, ch2);
	std::cout << ch1 << " " << ch2 << std::endl;

	// call by value
	double db1 = 1.111, db2 = 5.555;
	Swap(db1, db2);

	return 0;
}