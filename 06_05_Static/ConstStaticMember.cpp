// const static ���
// const static ����� ��� ����� ���ÿ� �ʱ�ȭ�� ���� 
// �׸��� const�� static �ΰ��� ������ �� ������ �ִ�.
#include<iostream>
using namespace std;

class CountryArea {
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main() {
	cout << "���þ� : " << CountryArea::RUSSIA << endl;
	cout << "�߱� : " << CountryArea::CHINA << endl;
	cout << "ĳ���� : " << CountryArea::CANADA << endl;
	cout << "���ѹα� : " << CountryArea::SOUTH_KOREA << endl;

	CountryArea ca;
	//ca.CANADA = 1; -> const ����̱� ������ lvalue�� ������ �Ұ����Ͽ� ������ ����

	return 0;
}