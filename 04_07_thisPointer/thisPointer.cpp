// this �������� ����
// this : ��ü �ڽ��� ����Ű�� �뵵

#include<iostream>
#include<cstring>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		// this->�� ����ϸ� �ش� ��ü�� ��� ���� Ȥ�� ��� �Լ��� �����Ѽ� ����� �� �ִ�.
		// ���� ���� ���� �Ű������� �̸��� �Ȱ��Ƽ� �򰥸��� ���� ���δ�.
		cout << "num= " << this->num << ", ";
		cout << "address= " << this << endl; // ��ü �ڽ��� ����Ŵ
	}

	void ShowSimpleData() {
		cout << num << endl;
	}

	// ��ü �ڽ��� ������ ����Ŵ
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main() {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü�� �ּ� �� ����

	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer(); // sim1 ��ü�� �ּ� �� ����

	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}