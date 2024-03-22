// bool 타입
// true는 1, false는 0

#include<iostream>
using namespace std;

bool IsPositive(int num) {
	if (num <= 0)
		return false;
	else
		return true;
}

int main() {
	int num;
	int i = 0;

	cout << "true: " << true << endl;
	cout << "false:" << false << endl;
	cout << "sizeof 1:" << sizeof(1) << endl;
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof true:" << sizeof(true) << endl;
	cout << "sizeof false:" << sizeof(false) << endl;

	bool isPos;
	
	cout << "Input Number: ";
	cin >> num;

	isPos = IsPositive(num);

	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

	return 0;
}