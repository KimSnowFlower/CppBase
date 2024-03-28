#include<iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt; // static 멤버 변수 선언, 공유하는 변수
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

// static 변수 초기화
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
	static int cmxObjCnt; // static 멤버 변수 선언, 공유하는 변수
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

// static 변수 초기화
int SoComplex::cmxObjCnt = 0;

int main() {
	// SoSimple의 simObjCnt를 카운트 시킴
	// 그리고 그 변수를 모두 공유하여 simObjCnt는 2 나옴
	SoSimple sim1;
	SoSimple sim2;

	// SoComplex의 cmxObjCnt를 카운트 시킴
	// 그리고 그 변수를 모두 공유하여 cmxObjCnt는 3 나옴
	SoComplex cmx1;
	SoComplex cmx2 = cmx1; // 얇은 복사
	SoComplex();

	return 0;
}