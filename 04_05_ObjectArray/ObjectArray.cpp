// 객체 배열
// 객체를 생성할 때 배열로 생성하여 일반 변수 배열처럼 사용 가능
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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	// 객체를 생성할 때 배열로 선언
	Person parr[3];
	char namestr[100];
	char* strptr;
	int age, len;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;

		cout << "나이: ";
		cin >> age;

		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}

	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}