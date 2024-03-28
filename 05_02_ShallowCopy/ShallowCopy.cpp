// ���� ����
// ����Ʈ ���� �����ڴ� ��� �� ����� ���縦 ����
// �̷��� ����� ���縦 ���� ����� �θ���.
// �̴� ��������� ���� �޸� ������ �����ϴ� ��쿡 ������ �ȴ�.
#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	char name[100] = {};
	cout << "�̸� �Է� : ";
	cin >> name;

	Person man1(name, 29);
	Person man2 = man1;		// ����Ʈ ���� �����ڷ� ���� ���� ����
	// ����Ʈ ���� �����ڷ� ���� ���� ������
	// man1���� man2�� ���簡 �� ��
	// name�� ��� ������ ���� ���̱� ������ ������ ������ Person�� ��� ���� name�� �����Լ��� name�� �ּҸ� �����Ѵ�.
	// �׷��ٸ�? �Ҹ��� ���� ���� ����Ǵ°�?
	// man2�� ���� name�� ������ ����� ������
	// man1�� �Ҹ��� �κп��� ������ name�� delete�� ������ ������ ã�� �� ���� ������ �����!!
	// �� ���� "���� ����"�� �� �� �� ���� �ؾ� �Ѵ�!!

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}