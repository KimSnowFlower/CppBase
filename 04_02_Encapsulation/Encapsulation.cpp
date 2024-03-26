// 캡슐화
// 캡슐화가 무너지면 클래스 상호관계가 복잡해지기 때문에 이는 프로그램 전체의 복잡도를 높이는 결과로 이루어진다
// 캡슐화는 감싸는 개념
// 멤버변수가 보이지 않게 정보를 은닉해서 깜사는 것이 좋다.
// 캡슐화는 기본적으로 정보은닉을 포함하는 개념이라고도 이야기한다.
#include<iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const { cout << "콧물" << endl; }
};

class SneezeCap {
public:
	void Take() const { cout << "재채기" << endl; }
};

class SunffleCap {
public:
	void Take() const { cout << "코가 뻥" << endl; }
};

class Contact {
private:
	SinivelCap scap;
	SneezeCap zcap;
	SunffleCap ncap;

public:
	void Take() const {
		scap.Take();
		zcap.Take();
		ncap.Take();
	}
};

class ColdPatient {
public:
	void TakeContact(const Contact& cap) const { cap.Take(); }
};

int main() {
	Contact con;
	ColdPatient sufferer;

	sufferer.TakeContact(con);

	return 0;
}