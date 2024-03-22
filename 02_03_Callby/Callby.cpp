// value vs reference
// ���� ���� ȣ�� vs ������ ���� ȣ��
// 01_06_FunctionOverloading���� �ѹ� �ٷ�
// �����ϰ� �ٽ� ���� ����
#include<iostream>
using namespace std;

// call-by-value
// �Ķ���͸� �޾Ƽ� �ش� �Լ� �ȿ����� ���� ���� ��
void SwapByValue(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// call-by-reference
// �Ķ���͸� �����ͷ� �ޱ� ������ �ش� �Ű������� �ּҷ� ���� �����͸� ������
void SwapByRef(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int val1 = 10, val2 = 20;

	SwapByValue(val1, val2);
	cout << val1 << " " << val2 << endl;

	//call-by-reference�� �׻� & ������ �Ű������� ����
	SwapByRef(&val1, &val2);
	cout << val1 << " " << val2 << endl;

	return 0;
}