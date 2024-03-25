// C++������ ����ü
// ����ü : ���� �ִ� �����͸� ���� �� �ִ� ������ ��ġ
// ex) Car ����ü �ȿ� ����, �ִ� �ӵ�, �ּ� �ӵ� ��� �ϳ��� ���� ������
// Ŭ���� : ���� �ִ� �����͸� ���� �� �ִ� ������ ��ġ
// ����ü�� Ŭ������ ������ �Ȱ����� Ű���尡 �ٸ��ٴ� ���� �������̴�.
// �׸��� Ŭ������ �����ڰ� �����Ѵٴ� �Ͱ� new delete�� ����ϴ� ���� �������̴�.
// Ŭ������ private, protected, public ���� �������� �����Ѵ�.

// ��ü���� ���α׷����� .h / .cpp�� ����� ���α׸�����
// .h�� Ŭ������ �����ϴ� ��Ʈ
// .cpp�� .h�� Ŭ���� ����� �κ��� �����ϴ� ��Ʈ
// �̹� ��Ʈ������ ���� ��������� �����Ͽ� ���α׷��� ���� ����

#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable : 4996)

namespace CAR_CONST {
	// ������ enum�� define ��� ��� ����
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

// ����ü
struct Car {
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	// ����ü �ȿ����� ��� ������ ��� �����ϱ� ������
	// �Ű������� Car &car�� ���� �ʿ䰡 ����.
	void ShowCarState() {
		cout << "������ id:" << gamerID << endl;
		cout << "���ᷮ:" << fuelGauge << endl;
		cout << "����ӵ�:" << curSpeed << "km/s" << endl << endl;
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

// ����ü �Լ��� �ܺη� �� �� ����
// void Car::ShowCarState()
// void Car::Accel()
// void Car::Break()

// Ŭ���� �Լ�
void CCar::InitMembers(char *ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void CCar::ShowCarState() {
	cout << "������ id:" << gamerID << endl;
	cout << "���ᷮ:" << fuelGauge << endl;
	cout << "����ӵ�:" << curSpeed << "km/s" << endl << endl;
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

// �ܺ� �Լ��� Car& car�� �ؾ��� Car �ȿ� ��� ������ ��� �����ϴ�.
void ShowCarState(const Car& car) {
	cout << "������ id:" << car.gamerID << endl;
	cout << "���ᷮ:" << car.fuelGauge << endl;
	cout << "����ӵ�:" << car.curSpeed << "km/s" << endl << endl;
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
	// �ܺ� �Լ��� �̿��ϴ� ����ü
	Car run99 = { "run99",100,0 };
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	// ����ü �ȿ� ��� �Լ��� ������ �̿��� ���
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