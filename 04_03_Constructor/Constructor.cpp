// 생성자의 이해
// 객체의 생성과 동시에 초기화는 것
// 생성자도 오버로딩이 가능, 생성자도 함수의 일종이니 매개변수에 '디폴트 값' 설정 가능
// 1단계 : 메모리 공간의 할당
// 2단계 : 이니셜라이저를 이용한 멤버변수의 초기화
// 3단계 : 생성자의 몸체부분 실행

#include<iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) {
		x = xpos;
		y = ypos;
	}

	int GetX() const { return x; }
	int GetY() const { return y; }

	bool SetX(int xpos) {
		if (0 > xpos || xpos > 100) {
			cout << "벗어난 범위의 값 전달" << endl;
			return false;
		}

		x = xpos;
		return true;
	}

	bool SetY(int ypos) {
		if (0 > ypos || ypos > 100) {
			cout << "벗어난 범위의 값 전달" << endl;
			return false;
		}

		y = ypos;
		return true;
	}
};

class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	// 멤버 이니셜라이저
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) :upLeft(x1, y1), lowRight(x2, y2) {

	}

	void ShowRecInfo() const {
		cout << "좌 상단: [" << upLeft.GetX() << ",";
		cout << upLeft.GetY() << ']' << endl;
		cout << "우 하단: [" << lowRight.GetX() << ",";
		cout << lowRight.GetY() << ']' << endl;
	}
};

class SimpleClass {
private:
	int num1;
	int num2;
public:
	// 생성자
	// 클래스의 이름과 함수의 이름이 동일
	// 반환형이 선언되어 있지 않으며, 실제로 반환하지 않음
	// 객체 생성시 딱 한번 호출
	
	// 디폴트 생성자
	SimpleClass() {
		num1 = 0;
		num2 = 0;
	}

	// 이니셜라이저를 이용하면 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성된다.
	// const 멤버변수도 이니셜라이저를 이용하여 초기화 가능
	// 이니셜라이저의 특징은 멤버변수로 참조라를 선언할 수 있게 한다
	SimpleClass(int n) : num1(n) {
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2) {
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const {
		cout << num1 << " " << num2 << endl;
	}
};

int main() {
	SimpleClass sc1;			// 생성자 값 전달 x, SimpleClass() 생성자 호출
	sc1.ShowData();

	SimpleClass sc2(100);		// 생성자에 100 전달, SimpleClass(int n) 생성자 호출
	sc2.ShowData();

	SimpleClass sc3(100, 200);  // 생성자에 100, 200 전달, SimpleClass(int n1, int n2) 생성자 호출
	sc3.ShowData();

	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();

	return 0;
}

// 번외 private 생성자
// 클래스 내부에서 객체를 생성한다면, 생성자가 private으로 선언하기도 한다.