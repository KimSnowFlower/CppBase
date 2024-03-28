// ���� ����
// ���� ����� ����� ��ü�� ���� ������ ���� ������ ���� ���ڿ��� �ǵ帮�� ������ ��������.
// ������ ���� ����� ����� ���ڿ� ���� �ϱ� ������ ���� ���ڿ������� �ٸ� �ּ��� ����� ���ڿ� ������ ������ ������ �ʴ´�.
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

	// ����Ʈ ���� �����ڰ� �ƴ� ���� �����ڷ� ����
	Person(const Person& copy) : age(copy.age) {
		// �ٷ� ���� ���ڿ��� �����ϴ� ���� �ƴ�
		// �����Ͽ� ����� ���ڿ��� �����ϰ� �ٲ�
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
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
	Person man2 = man1;	

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}