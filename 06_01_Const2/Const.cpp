// Const 상수형 Ver2
#include<iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
	}

	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	void ShowData() const {
		cout << "num : " << num << endl;
	}
};

int main() {
	// const 객체를 생성하면 객체의 데이터 변경을 허용하지 않겠다 라는 말!!
	const SoSimple obj(7);

	//obj.AddNum(100) 
	//-> const 함수가 아니기 때문에 호출 불가능
	obj.ShowData();
	return 0;
}