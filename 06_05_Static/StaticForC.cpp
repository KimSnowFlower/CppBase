// C언에서 배운 static
// 전역변수에 선언된 static의 의미
// -> 선언된 파닐 내에서만 참조를 허용하겠다는 의미
// 함수 내에 선언된 static의 의미
// -> 한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 소멸되지 않는다.
#include<iostream>
using namespace std;

void Counter() {
	// static 변수는 전역변수와 마찬가지로 초기화하지 않으면 0으로 자동 초기화!!
	// 딱 한번 실행이 된다
	// 함수 호출마다 새롭게 할당하는 지역변수가 아니다
	static int cnt;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++)
		Counter();

	return 0;
}