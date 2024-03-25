// ��������
// ���ѵ� ��������� ���ٸ� ����ϰ� �߸��� ���� ������� �ʵ���!!
// ���;� �ϰ�, �� �Ǽ��� ���� ��, �Ǽ��� ���� �����ǵ��� �ؾ� �Ѵ�.
// �� ���� ��, Ŭ���� �ȿ� ��� ������ �ܺο��� �����Ͽ� ���� ���� �Ǵ� ���� ����� �Ѵ�!!
// �ִ��� �Լ��� ���� �� ��ü�� ���� �͵��� ���ؾ� �Ѵ�.

#include<iostream>
#include"InformationHiding.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xpos;
	y = ypos;

	return true;
}

// Get�� Set�� �̿��Ͽ� ���� �ʱ�ȭ/������ �ؾ� �Ѵ�
// �Ϲ������� ���� public���� �����Ͽ�
// ���� �����ϰ� �ϴ� ���� ���� �ʴ�
int Point::GetX() const {
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	y = ypos;
	return true;
}

int main() {
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "�ʱ�ȭ ����" << endl;
	if(!pos1.InitMembers(2,4))
		cout << "�ʱ�ȭ ����" << endl;

	return 0;
}