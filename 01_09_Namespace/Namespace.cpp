//namespace란?
//일명 이름 공간이라는 뜻
//같은 명의 함수가 중복이 될 경우 해당 namespace로 구별하여 사용 가능
//공용 개발을 할 때 이름 공간에 분리하여 함수, 변수명이 겹치는 걸 방지한다.
//중첩 namespace도 사용 가능

#include<iostream>
// using 사용
// using namespace std는 namespace std에 해당하는 함수, 변수들에 std::을 필요없이 사용하게 만듬
// namespace std 해당 : cout, cin, endl;
using namespace std;

// namespace는 같은 이름으로 분리 선언, 정의 가능
namespace BestComImp1 {
	void SimpleFunc(void);
}

namespace BestComImp1 {
	void PrettyFunc(void);
}

namespace ProgComImp1 {
	void SimpleFunc(void);
}

int main() {
	BestComImp1::SimpleFunc();

	return 0;
}

void BestComImp1::SimpleFunc(void) {
	cout << "Best이 정의한 함수" << endl;

	//PrettyFunc()의 경우 같은 namespace이기에 이름공간의 지정 필요없음
	PrettyFunc();
	//같은 namespace가 아니기 때문에 ProComImp1이란 이름공간의 지정이 필요하다
	ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void) {
	cout << "So Pretty" << endl;
}

void ProgComImp1::SimpleFunc(void){
	cout << "ProgCom이 정의한 함수" << endl;
}

//namespace 별칭 지정 가능
//중첩 namespace로 AAA::BBB::CCC가 있다면
//namespace ABC = AAA::BBB::CCC를 통해 별칭 지정 가능
//그럼 별칭은 초기화 당시 해당하는 namespace의 영역을 사용 가능하다

//범위지정 연사자의 또 다른 기능
//int val=1000 전역변수
//int val=20   지역변수
//val+3;	   지역변수 val의 값 3 증가
//::val+=7     전역변수 val의 값 7 증가