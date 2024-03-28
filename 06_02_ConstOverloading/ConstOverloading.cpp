// 함수 오버로딩의 성립은 매개변수의 수나 자료형이 달라야 하는데
// const의 선언유무도 함수 오버로딩의 조건 해당!!
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
	}

	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	void SimpleFunc() {
		cout << "SimpleFunc: " << num << endl;
	}

	void SimpleFunc() const {
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj) {
	obj.SimpleFunc();
}

int main() {
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}