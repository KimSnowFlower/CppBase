// �Ҹ���
// Ŭ������ �̸� �տ� '~'�� ���� ������ �̸��� ����
// ��ȯ���� ����Ǿ� ���� �ʰ�, ������ ��ȯ���� �ʴ´�.
// �Ű������� void������ ����Ǿ�� �ϱ� ������ �����ε���, ����Ʈ �� ������ �Ұ����ϴ�.

#include<iostream>
#include<cstring>
#pragma warning(disable : 4996)
using namespace std;

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
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor" << endl;
	}
};

int main() {
	char name[100];
	cin >> name;

	Person man1(name, 29);
	man1.ShowPersonInfo();

	cin >> name;
	Person man2(name, 41);
	man2.ShowPersonInfo();

	return 0;
}