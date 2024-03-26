// ĸ��ȭ
// ĸ��ȭ�� �������� Ŭ���� ��ȣ���谡 ���������� ������ �̴� ���α׷� ��ü�� ���⵵�� ���̴� ����� �̷������
// ĸ��ȭ�� ���δ� ����
// ��������� ������ �ʰ� ������ �����ؼ� ����� ���� ����.
// ĸ��ȭ�� �⺻������ ���������� �����ϴ� �����̶�� �̾߱��Ѵ�.
#include<iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const { cout << "�๰" << endl; }
};

class SneezeCap {
public:
	void Take() const { cout << "��ä��" << endl; }
};

class SunffleCap {
public:
	void Take() const { cout << "�ڰ� ��" << endl; }
};

class Contact {
private:
	SinivelCap scap;
	SneezeCap zcap;
	SunffleCap ncap;

public:
	void Take() const {
		scap.Take();
		zcap.Take();
		ncap.Take();
	}
};

class ColdPatient {
public:
	void TakeContact(const Contact& cap) const { cap.Take(); }
};

int main() {
	Contact con;
	ColdPatient sufferer;

	sufferer.TakeContact(con);

	return 0;
}