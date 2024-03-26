// �������� ����
// ��ü�� ������ ���ÿ� �ʱ�ȭ�� ��
// �����ڵ� �����ε��� ����, �����ڵ� �Լ��� �����̴� �Ű������� '����Ʈ ��' ���� ����
// 1�ܰ� : �޸� ������ �Ҵ�
// 2�ܰ� : �̴ϼȶ������� �̿��� ��������� �ʱ�ȭ
// 3�ܰ� : �������� ��ü�κ� ����

#include<iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) {
		x = xpos;
		y = ypos;
	}

	int GetX() const { return x; }
	int GetY() const { return y; }

	bool SetX(int xpos) {
		if (0 > xpos || xpos > 100) {
			cout << "��� ������ �� ����" << endl;
			return false;
		}

		x = xpos;
		return true;
	}

	bool SetY(int ypos) {
		if (0 > ypos || ypos > 100) {
			cout << "��� ������ �� ����" << endl;
			return false;
		}

		y = ypos;
		return true;
	}
};

class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	// ��� �̴ϼȶ�����
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) :upLeft(x1, y1), lowRight(x2, y2) {

	}

	void ShowRecInfo() const {
		cout << "�� ���: [" << upLeft.GetX() << ",";
		cout << upLeft.GetY() << ']' << endl;
		cout << "�� �ϴ�: [" << lowRight.GetX() << ",";
		cout << lowRight.GetY() << ']' << endl;
	}
};

class SimpleClass {
private:
	int num1;
	int num2;
public:
	// ������
	// Ŭ������ �̸��� �Լ��� �̸��� ����
	// ��ȯ���� ����Ǿ� ���� ������, ������ ��ȯ���� ����
	// ��ü ������ �� �ѹ� ȣ��
	
	// ����Ʈ ������
	SimpleClass() {
		num1 = 0;
		num2 = 0;
	}

	// �̴ϼȶ������� �̿��ϸ� ����� ���ÿ� �ʱ�ȭ�� �̷����� ���·� ���̳ʸ� �ڵ尡 �����ȴ�.
	// const ��������� �̴ϼȶ������� �̿��Ͽ� �ʱ�ȭ ����
	// �̴ϼȶ������� Ư¡�� ��������� ������ ������ �� �ְ� �Ѵ�
	SimpleClass(int n) : num1(n) {
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2) {
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const {
		cout << num1 << " " << num2 << endl;
	}
};

int main() {
	SimpleClass sc1;			// ������ �� ���� x, SimpleClass() ������ ȣ��
	sc1.ShowData();

	SimpleClass sc2(100);		// �����ڿ� 100 ����, SimpleClass(int n) ������ ȣ��
	sc2.ShowData();

	SimpleClass sc3(100, 200);  // �����ڿ� 100, 200 ����, SimpleClass(int n1, int n2) ������ ȣ��
	sc3.ShowData();

	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();

	return 0;
}

// ���� private ������
// Ŭ���� ���ο��� ��ü�� �����Ѵٸ�, �����ڰ� private���� �����ϱ⵵ �Ѵ�.