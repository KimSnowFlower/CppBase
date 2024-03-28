#include<iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;
	
	SoSimple() {
		simObjCnt++;
	}

	// static 멤버 함수
	// 서언된 클래스의 모든 객체가 공유
	// public으로 선언이 되면, 클래스의 이름을 이용하여 호출 가능
	// 객체의 멤버로 존재하는 것이 아니다.
	static void ObjAdd(int n) {
		simObjCnt += n;
	}
};

int SoSimple::simObjCnt = 0;

int main() {
	// 처음에는 0 이기 때문에 0번째 객체가 나옴
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1; // simObjCnt == 1
	SoSimple sim2; // simObjCnt == 2

	// static 변수가 2가 되어 있어서
	// 2번째 객체가 나옴
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;

	// 위 코드들에서 2까지만 값을 변경하고
	// 또 다른 객체 생성 혹은 simObjCnt 값을 변경하지 않아서 두개 연속 2번째 SoSimple 객체가 나옴
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	// sim1.ObjAdd => 2+5 = 7
	sim1.ObjAdd(5);
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;

	// sim2.ObjAdd = 7+5 = 12
	sim2.ObjAdd(5);
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}