//C��� ���� �ڵ�

// const�� �����ΰ�?
// const == ���
// ����� ����? -> ���� ������ �ʴ� ���� �� 
// ����� ó�� ������ ���� ���� �Ҵ��� �� �ְ� �� �������ʹ� ���� ������ �� ����
// �Ʒ� ������� const�� ���� ��� ����̴�.
#include<iostream>
using namespace std;

class ConstExample {
	const int num;

	ConstExample() : num(3) {
		//num = 3; ����
	}// ����

	// const ��� �Լ�, �� �ȿ� ���� ������ �Ұ���
	void print() const {};
};

// �Ķ���� ���� �б⸸ �����ϰ� ������ �Ұ����ϴ�
int Function(const int num1, const int num2) {
	return 10;
}

int main() {
	int val1 = 10, val2 = 11, val3 = 12;

	// ���� num�� ���ȭ
	const int num = 10;

	// ������ ptr1�� �̿��ؼ� val1�� ���� ������ �� ���� ��,val1�� ���� ���� ����
	const int* ptr1 = &val1;
	val1 = 20;

	// ������ ptr2�� ���ȭ �� ��, ptr�� �ּ� ���� ���� �ٲٴ� ���� �Ұ���
	int* const ptr2 = &val2;
	*ptr2 = 3; // ����
	//ptr2 = &val; ����

	// ������ ptr3�� ���ȭ �Ǿ�����, ptr3�� �̿��ؼ� val3�� ���� ������ �� ����
	const int* const ptr3 = &val3;
	//*ptr3 = 3;   ����
	//ptr3 = &val; ����

	cout << num << " " << ptr1 << " " << ptr2 << " " << ptr3 << endl;

	int num1 = Function(1,2);
	const int num2 = Function(1, 2);

	num1 = 30;
	// num2 = 30; ����
	return 0;
}