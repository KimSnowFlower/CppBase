// C++에서의 구조체
// 구조체 : 연관 있는 데이터를 묶을 수 있는 문법적 장치
// ex) Car 구조체 안에 연료, 최대 속도, 최소 속도 등등 하나로 묶어 버리기
// 클래스 : 연관 있는 데이터를 묶을 수 있는 문법적 장치
// 구조체와 클래스는 구조는 똑같지만 키워드가 다르다는 것이 차이점이다.
// 그리고 클래스는 생성자가 존재한다는 것과 new delete를 사용하는 것이 차이점이다.
// 클래스는 private, protected, public 접근 지정저가 존재한다.

// 객체지향 프로그래밍은 .h / .cpp를 나누어서 프로그맹힌다
// .h는 클래스를 선언하는 파트
// .cpp는 .h의 클래스 선언된 부분을 정의하는 파트
// 이번 파트에서는 따로 헤더까지는 구분하여 프로그래밍 하지 않음

#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

namespace CAR_CONST {
	// 열거형 enum을 define 대신 사용 가능
	enum {
		ID_LEN2 = 20,
		MAX_SPD2 = 200,
		FUEL_STEP2 = 2,
		ACC_STEP2 = 10,
		BRK_STEP2 = 10
	};
}

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

// 구조체
struct Car {
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	// 구조체 안에서는 멤버 변수를 사용 가능하기 때문에
	// 매개변수로 Car &car를 받을 필요가 없다.
	void ShowCarState() {
		cout << "소유자 id:" << gamerID << endl;
		cout << "연료량:" << fuelGauge << endl;
		cout << "현재속도:" << curSpeed << "km/s" << endl << endl;
	}

	void Accel() {
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP2;

		if (curSpeed + CAR_CONST::ACC_STEP2 >= CAR_CONST::MAX_SPD2) {
			curSpeed = CAR_CONST::MAX_SPD2;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP2;
	}

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP2) {
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP2;
	}
};

class CCar {
private:
	char gamerID[CAR_CONST::ID_LEN2];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

// 구조체 함수를 외부로 뺄 수 있음
// void Car::ShowCarState()
// void Car::Accel()
// void Car::Break()

// 클래스 함수
void CCar::InitMembers(char *ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void CCar::ShowCarState() {
	cout << "소유자 id:" << gamerID << endl;
	cout << "연료량:" << fuelGauge << endl;
	cout << "현재속도:" << curSpeed << "km/s" << endl << endl;
}

void CCar::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP2;

	if (curSpeed + CAR_CONST::ACC_STEP2 >= CAR_CONST::MAX_SPD2) {
		curSpeed = CAR_CONST::MAX_SPD2;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP2;
}

void CCar::Break() {
		if (curSpeed < CAR_CONST::BRK_STEP2) {
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP2;
}

// 외부 함수는 Car& car를 해야지 Car 안에 멤버 변수를 사용 가능하다.
void ShowCarState(const Car& car) {
	cout << "소유자 id:" << car.gamerID << endl;
	cout << "연료량:" << car.fuelGauge << endl;
	cout << "현재속도:" << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car) {
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car) {
	if (car.curSpeed < BRK_STEP) {
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main() {
	// 외부 함수를 이용하는 구조체
	Car run99 = { "run99",100,0 };
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	// 구조체 안에 멤버 함수와 변수를 이용한 사례
	Car load100 = { "load100", 100,0 };
	load100.Accel();
	load100.ShowCarState();
	load100.Break();
	load100.ShowCarState();

	CCar crun99;
	char name[99] = "crun99";
	crun99.InitMembers(name, 100);
	crun99.Accel();
	crun99.ShowCarState();
	crun99.Break();
	crun99.ShowCarState();

	return 0;
}