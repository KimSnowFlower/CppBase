// call by address��?
// �Ű������� �����ͷ� �ְ� �Լ� ȣ�� �� �ش� �Ű������� �ּҸ� ����
// void func(int *ptr) { *ptr *= 2; }
// main () { int num = 3; func(&num); }

// call by reference��?
// �Ű������� ������ ������ �ְ� �Լ� ȣ�� �� lvalue�� ����
// void func(int& a) { a *= 2; }
// main () { int num = 3; func(num); }

// call by value��?
// �Ű������� Ÿ�Կ� ���� ���� ����
// void func(int a) { a *= 2; }
// main () { int num = 3; func(num); }

// call by address		func(Ÿ�� *a) func(&num)
// call by reference	func(Ÿ��& a) func(num)
// call by value		func(Ÿ�� a)  func(a)
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
	// call by address ������ ���
	int num1 = 20, num2 = 30;
	Swap(&num1, &num2);
	std::cout << num1 << " " << num2 << std::endl;

	// call by reference ������ ���
	char ch1 = 'a', ch2 = 'b';
	Swap(ch1, ch2);
	std::cout << ch1 << " " << ch2 << std::endl;

	// call by value
	double db1 = 1.111, db2 = 5.555;
	Swap(db1, db2);

	return 0;
}