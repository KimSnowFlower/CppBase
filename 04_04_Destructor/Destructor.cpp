// 소멸자
// 클래스의 이름 앞에 '~'가 붙은 형태의 이름을 가짐
// 반환형이 선언되어 있지 않고, 실제로 반환하지 않는다.
// 매개변수는 void형으로 선언되어야 하기 때문에 오버로딩도, 디폴트 값 설정도 불가능하다.

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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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