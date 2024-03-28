// 깊은 복사
// 얇은 복사는 복사된 객체가 같은 포인터 참조 때문에 같은 문자열을 건드리기 때문에 문제였다.
// 하지만 깊은 복사는 복사된 문자열 참조 하기 때문에 같은 문자열이지만 다른 주소의 복사된 문자열 참조로 문제가 생기지 않는다.
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

	// 디폴트 복사 생성자가 아닌 복사 생성자로 선언
	Person(const Person& copy) : age(copy.age) {
		// 바로 참조 문자열을 복사하는 것이 아닌
		// 복사하여 복사된 문자열을 참조하게 바꿈
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void ShowPersonInfo() const {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	char name[100] = {};
	cout << "이름 입력 : ";
	cin >> name;

	Person man1(name, 29);
	Person man2 = man1;	

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}