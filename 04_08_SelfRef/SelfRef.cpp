#include<iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "객체 생성" << endl;
	}

	// 반환형 *this
	// 이는 이 문장을 실행하는 객체 자신의 포인터가 아닌, 객체 자신을 반환하겠다는 의미!!!
	// 하지만 반환형이 참조형 SelfRef&으로 선언됨.
	// 객체 자신을 참조할 수 있는 참조의 정보가 반환된다.
	SelfRef& Adder(int n) {
		num += n;

		return *this;
	}

	SelfRef& ShowTwoNumber() {
		cout << num << endl;

		return *this;
	}
};

int main() {
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();

	return 0;
}