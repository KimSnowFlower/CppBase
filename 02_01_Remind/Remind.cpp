//C��� ���� �ڵ�

// const�� �����ΰ�?
// const == ���
// ����� ����? -> ���� ������ �ʴ� ���� �� 
// ����� ó�� ������ ���� ���� �Ҵ��� �� �ְ� �� �������ʹ� ���� ������ �� ����
#include<iostream>
using namespace std;

int main() {
	int val1 = 10, val2 = 11, val3 = 12;
	
	// ���� num�� ���ȭ
	const int num = 10;

	// ������ ptr1�� �̿��ؼ� val1�� ���� ������ �� ����
	const int* ptr1 = &val1;

	// ������ ptr2�� ���ȭ ��
	int* const ptr2 = &val2;

	// ������ ptr3�� ���ȭ �Ǿ�����, ptr3�� �̿��ؼ� val3�� ���� ������ �� ����
	const int* const ptr3 = &val3;

	cout << num << " " << ptr1 << " " << ptr2 << " " << ptr3 << endl;
	return 0;
}