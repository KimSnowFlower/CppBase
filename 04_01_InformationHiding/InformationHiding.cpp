// 정보은닉
// 제한된 방법으로의 접근만 허용하고 잘못된 값이 저장되지 않도록!!
// 도와야 하고, 또 실수를 했을 때, 실수가 쉽게 발전되도록 해야 한다.
// 이 말은 즉, 클래스 안에 멤버 변수는 외부에서 접근하여 값이 변경 되는 것이 없어야 한다!!
// 최대한 함수를 통해 그 객체에 대한 것들이 변해야 한다.

#include<iostream>
#include"InformationHiding.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;

	return true;
}

// Get과 Set을 이용하여 값을 초기화/리턴을 해야 한다
// 일방적으로 값을 public으로 선언하여
// 값을 변경하고 하는 것은 좋지 않다
int Point::GetX() const {
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}

int main() {
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "초기화 실패" << endl;
	if(!pos1.InitMembers(2,4))
		cout << "초기화 실패" << endl;

	return 0;
}