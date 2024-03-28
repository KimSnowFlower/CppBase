// Freind -> 친구
// friend 키워드를 사용하여 다른 객체 멤버들을 사용할 수 있음
// 그렇다면 여기서 문제인 점
// friend는 다른 객체의 private 멤버도 사용 가능하기 때문에
// 정보은닉에 위배가 된다
// 즉, friend가 어느식으로 작동하는지 정확히 어떤 키워드인지 알아야
// 나중에 코드가 문제가 생겼을 때 고치거나 friend를 제거하여
// 정보은닉을 유지하는데 도움이 될 수 있다.

#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

// boy 클래스에 friend를 쓰기 위한 Girl 클래스 선언
class Girl;

class Boy {
private:
	int height;
	friend class Girl; // friend의 위치는 어디여도 ok
public:
	Boy(int len) : height(len){}

	// Girl 클래스를 참조하는 함수 사용  가능
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(char* num) {
		strcpy(phNum, num);
	}

	void ShowYourFreindInfo(Boy& frn);
	friend class Boy; // friend의 위치는 어디여도 ok
};

// friend 키워드를 사용한 객체 멤버 함수 안에서 friend 클래스 멤버 변수 호출!!
// friend를 이용하면 private 객체도 사용 가능
void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "her phone number " << frn.phNum << endl;
}

void Girl::ShowYourFreindInfo(Boy& frn) {
	cout << "His height " << frn.height << endl;
}

int main() {
	char num[20] = "010-1234-5678";
	Boy boy(170);
	Girl girl(num);

	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFreindInfo(boy);

	return 0;
}