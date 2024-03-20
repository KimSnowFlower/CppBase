//Inline 함수란?
//쉽게 이야기 해서
// 프로그램 코드라인 안으로 들어가 버린 함수

// 매크로 함수 vs 인라인 함수
// 메크로 함수는 지정 타입이 없기 때문에 모든 타입을 유용하게 사용 가능
// 인라인 함수는 Template을 사용하지 않으면 해당 매개변수 타입만 사용 가능
#include<iostream>
#define ADDER(x) x+x	// 매크로 함수

// 인라인 함수
// 일반 함수처럼 정의하기 좋아서 인라인을 사용한다.
// 이후에 배우는 Template과 유용하게 사용 가능하다.
inline int SQUARE(int x)
{
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl;
	std::cout << ADDER(5) << std::endl;

	return 0;
}