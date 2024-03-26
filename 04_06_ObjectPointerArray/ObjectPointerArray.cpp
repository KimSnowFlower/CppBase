// ��ü ������ �迭
// ��ü�� ������ �� �迭�� �����Ͽ� �Ϲ� ���� �迭ó�� ��� ����
#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

class Person {
private:
	char* name;
	int age;
public:
	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void SetPersonInfo(char* myname, int myage) {
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	// ��ü�� ������ �� �迭�� ����
	Person *parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "�̸�: ";
		cin >> namestr;

		cout << "����: ";
		cin >> age;

		// i��° ��ü ����
		parr[i] = new Person(namestr, age);
	}

	// .�� �ƴ� ->�� ����Ͽ� �����ͷ� �Լ� ȣ��
	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	// ��ü�� new�� ����Ͽ� �����߱� ������ delete�� ����Ͽ� �޸� ����
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}