#include<iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "��ü ����" << endl;
	}

	// ��ȯ�� *this
	// �̴� �� ������ �����ϴ� ��ü �ڽ��� �����Ͱ� �ƴ�, ��ü �ڽ��� ��ȯ�ϰڴٴ� �ǹ�!!!
	// ������ ��ȯ���� ������ SelfRef&���� �����.
	// ��ü �ڽ��� ������ �� �ִ� ������ ������ ��ȯ�ȴ�.
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