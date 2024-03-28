#include<iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt; // static ��� ���� ����, �����ϴ� ����
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

// static ���� �ʱ�ȭ
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
	static int cmxObjCnt; // static ��� ���� ����, �����ϴ� ����
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};

// static ���� �ʱ�ȭ
int SoComplex::cmxObjCnt = 0;

int main() {
	// SoSimple�� simObjCnt�� ī��Ʈ ��Ŵ
	// �׸��� �� ������ ��� �����Ͽ� simObjCnt�� 2 ����
	SoSimple sim1;
	SoSimple sim2;

	// SoComplex�� cmxObjCnt�� ī��Ʈ ��Ŵ
	// �׸��� �� ������ ��� �����Ͽ� cmxObjCnt�� 3 ����
	SoComplex cmx1;
	SoComplex cmx2 = cmx1; // ���� ����
	SoComplex();

	return 0;
}