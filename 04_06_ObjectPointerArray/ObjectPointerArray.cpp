// 객체 포인터 배열
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
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	// 객체를 생성할 때 배열로 선언
	Person *parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;

		cout << "나이: ";
		cin >> age;

		// i번째 객체 생성
		parr[i] = new Person(namestr, age);
	}

	// .이 아닌 ->를 사용하여 포인터로 함수 호출
	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	// 객체를 new를 사용하여 생성했기 때문에 delete를 사용하여 메모리 삭제
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}