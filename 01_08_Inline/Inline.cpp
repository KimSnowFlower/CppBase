//Inline �Լ���?
//���� �̾߱� �ؼ�
// ���α׷� �ڵ���� ������ �� ���� �Լ�

// ��ũ�� �Լ� vs �ζ��� �Լ�
// ��ũ�� �Լ��� ���� Ÿ���� ���� ������ ��� Ÿ���� �����ϰ� ��� ����
// �ζ��� �Լ��� Template�� ������� ������ �ش� �Ű����� Ÿ�Ը� ��� ����
#include<iostream>
#define ADDER(x) x+x	// ��ũ�� �Լ�

// �ζ��� �Լ�
// �Ϲ� �Լ�ó�� �����ϱ� ���Ƽ� �ζ����� ����Ѵ�.
// ���Ŀ� ���� Template�� �����ϰ� ��� �����ϴ�.
inline int SQUARE(int x)
{
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl;
	std::cout << ADDER(5) << std::endl;

	return 0;
}