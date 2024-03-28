// C�𿡼� ��� static
// ���������� ����� static�� �ǹ�
// -> ����� �Ĵ� �������� ������ ����ϰڴٴ� �ǹ�
// �Լ� ���� ����� static�� �ǹ�
// -> �ѹ��� �ʱ�ȭ�ǰ�, ���������� �޸� �Լ��� ���������� �Ҹ���� �ʴ´�.
#include<iostream>
using namespace std;

void Counter() {
	// static ������ ���������� ���������� �ʱ�ȭ���� ������ 0���� �ڵ� �ʱ�ȭ!!
	// �� �ѹ� ������ �ȴ�
	// �Լ� ȣ�⸶�� ���Ӱ� �Ҵ��ϴ� ���������� �ƴϴ�
	static int cnt;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++)
		Counter();

	return 0;
}