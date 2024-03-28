#include<iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;
	
	SoSimple() {
		simObjCnt++;
	}

	// static ��� �Լ�
	// ����� Ŭ������ ��� ��ü�� ����
	// public���� ������ �Ǹ�, Ŭ������ �̸��� �̿��Ͽ� ȣ�� ����
	// ��ü�� ����� �����ϴ� ���� �ƴϴ�.
	static void ObjAdd(int n) {
		simObjCnt += n;
	}
};

int SoSimple::simObjCnt = 0;

int main() {
	// ó������ 0 �̱� ������ 0��° ��ü�� ����
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	SoSimple sim1; // simObjCnt == 1
	SoSimple sim2; // simObjCnt == 2

	// static ������ 2�� �Ǿ� �־
	// 2��° ��ü�� ����
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;

	// �� �ڵ�鿡�� 2������ ���� �����ϰ�
	// �� �ٸ� ��ü ���� Ȥ�� simObjCnt ���� �������� �ʾƼ� �ΰ� ���� 2��° SoSimple ��ü�� ����
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;

	// sim1.ObjAdd => 2+5 = 7
	sim1.ObjAdd(5);
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;

	// sim2.ObjAdd = 7+5 = 12
	sim2.ObjAdd(5);
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}