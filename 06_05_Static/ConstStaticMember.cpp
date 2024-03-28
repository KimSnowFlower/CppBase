// const static 멤버
// const static 멤버의 경우 선언과 동시에 초기화가 가능 
// 그리고 const와 static 두개의 성질을 다 가지고 있다.
#include<iostream>
using namespace std;

class CountryArea {
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main() {
	cout << "러시아 : " << CountryArea::RUSSIA << endl;
	cout << "중국 : " << CountryArea::CHINA << endl;
	cout << "캐나다 : " << CountryArea::CANADA << endl;
	cout << "대한민국 : " << CountryArea::SOUTH_KOREA << endl;

	CountryArea ca;
	//ca.CANADA = 1; -> const 상수이기 때문에 lvalue가 수정이 불가능하여 오류가 난다

	return 0;
}