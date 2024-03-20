//namespace��?
//�ϸ� �̸� �����̶�� ��
//���� ���� �Լ��� �ߺ��� �� ��� �ش� namespace�� �����Ͽ� ��� ����
//���� ������ �� �� �̸� ������ �и��Ͽ� �Լ�, �������� ��ġ�� �� �����Ѵ�.
//��ø namespace�� ��� ����

#include<iostream>
// using ���
// using namespace std�� namespace std�� �ش��ϴ� �Լ�, �����鿡 std::�� �ʿ���� ����ϰ� ����
// namespace std �ش� : cout, cin, endl;
using namespace std;

// namespace�� ���� �̸����� �и� ����, ���� ����
namespace BestComImp1 {
	void SimpleFunc(void);
}

namespace BestComImp1 {
	void PrettyFunc(void);
}

namespace ProgComImp1 {
	void SimpleFunc(void);
}

int main() {
	BestComImp1::SimpleFunc();

	return 0;
}

void BestComImp1::SimpleFunc(void) {
	cout << "Best�� ������ �Լ�" << endl;

	//PrettyFunc()�� ��� ���� namespace�̱⿡ �̸������� ���� �ʿ����
	PrettyFunc();
	//���� namespace�� �ƴϱ� ������ ProComImp1�̶� �̸������� ������ �ʿ��ϴ�
	ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void) {
	cout << "So Pretty" << endl;
}

void ProgComImp1::SimpleFunc(void){
	cout << "ProgCom�� ������ �Լ�" << endl;
}

//namespace ��Ī ���� ����
//��ø namespace�� AAA::BBB::CCC�� �ִٸ�
//namespace ABC = AAA::BBB::CCC�� ���� ��Ī ���� ����
//�׷� ��Ī�� �ʱ�ȭ ��� �ش��ϴ� namespace�� ������ ��� �����ϴ�

//�������� �������� �� �ٸ� ���
//int val=1000 ��������
//int val=20   ��������
//val+3;	   �������� val�� �� 3 ����
//::val+=7     �������� val�� �� 7 ����