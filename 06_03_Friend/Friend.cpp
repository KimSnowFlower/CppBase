// Freind -> ģ��
// friend Ű���带 ����Ͽ� �ٸ� ��ü ������� ����� �� ����
// �׷��ٸ� ���⼭ ������ ��
// friend�� �ٸ� ��ü�� private ����� ��� �����ϱ� ������
// �������п� ���谡 �ȴ�
// ��, friend�� ��������� �۵��ϴ��� ��Ȯ�� � Ű�������� �˾ƾ�
// ���߿� �ڵ尡 ������ ������ �� ��ġ�ų� friend�� �����Ͽ�
// ���������� �����ϴµ� ������ �� �� �ִ�.

#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

// boy Ŭ������ friend�� ���� ���� Girl Ŭ���� ����
class Girl;

class Boy {
private:
	int height;
	friend class Girl; // friend�� ��ġ�� ��𿩵� ok
public:
	Boy(int len) : height(len){}

	// Girl Ŭ������ �����ϴ� �Լ� ���  ����
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
	friend class Boy; // friend�� ��ġ�� ��𿩵� ok
};

// friend Ű���带 ����� ��ü ��� �Լ� �ȿ��� friend Ŭ���� ��� ���� ȣ��!!
// friend�� �̿��ϸ� private ��ü�� ��� ����
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