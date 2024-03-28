// 얕은 복사
// 디폴트 복사 생성자는 멤버 대 멤버의 복사를 진행
// 이러한 방식의 복사를 얕은 복사라 부른다.
// 이는 멤버변수가 힙의 메모리 공간을 참조하는 경우에 문제가 된다.
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
	Person man2 = man1;		// 디폴트 복사 생성자로 인한 얇은 복사
	// 디폴트 복사 생성자로 얇은 복사 문제점
	// man1에서 man2로 복사가 될 때
	// name의 경우 참조로 보낸 것이기 때문에 포인터 참조로 Person의 멤버 변수 name은 메인함수의 name의 주소를 참조한다.
	// 그렇다면? 소멸자 실행 때는 어찌되는가?
	// man2가 먼저 name의 참조를 지우기 때문에
	// man1의 소멸자 부분에서 참조할 name이 delete로 지웠기 때문에 찾을 수 없는 문제가 생긴다!!
	// 이 점은 "얇은 복사"를 할 때 꼭 주의 해야 한다!!

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}