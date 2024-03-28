// ���������
// �� ��ü�� ������ �ٸ� ��ü�� �����Ͽ� ������ ������
// Ư¡
// 1. �ڽŰ� ���� Ÿ���� ��ü�� ���ڷ� �޴´�
// 2. ���� �����ڰ� ���ǵǾ� ���� �ʴٸ�, ����Ʈ ���� �����ڰ� �����ȴ�. -> ���� ���� �����ڸ� �������� �ʾƵ� �ȴ� �̰ǰ�?

#include<iostream>
using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {
		
	}

	// �Ű������� ��ü�� �ް� �� ��ü�� ������ �ʱ�ȭ
	// const�� ����ϴ� ������ ��ü�� ���� �ٲ� �� �ֱ� ������ const�� �Ű������� �޴� ���� ����.
	SoSimple(const SoSimple& copy) : num1(copy.num1), num2(copy.num2) {
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main() {
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;

	SoSimple sim2 = sim1;// ���� Ŭ���� ��ü�� �ʱ�ȭ!!
	// SoSimple sim2 = sim1 <==> SoSimple sim2(sim1)
	// ��������ڴ� ���������� ȣ��� ������ �� �� �ִ�.

	// ������ ȣ���� �������� ���� ������ �տ� explicit Ű���带 ����ϸ� ������ ȣ���� ���� �ʴ´�.
	// ��� �� �ڵ�ó�� ��ü ���� �Ұ�
	// explicit�� SoSimple sim2(sim1) ���� ������ ȣ��
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();

	return 0;
}