
#include "Calculator.h"
//#summ (��ó�� ó�� ����� �����)
using namespace std;
class Calculator {
private:
	double x;
	char opar;
	double y;
	double sum;
public:
	double n=x;
	double m=y;
	char hamsu;
	
	int print() {
		cout << "ù��° �� �Է�";
		cin >> n;
		cout << "�����ڸ� �Է����ּ��� ex + - * / ���Ḧ ���Ͻø� q ������c";
		cin >> hamsu;
		if (hamsu == 'c')
			print();
		cout << "�ι�° �� �Է�";
		cin >> m;

		return summ(x, hamsu, y);
	}
	
};

using namespace std; // std:: �� �⺻���� �ۼ��ϰ��ִ� ��� �����ϰ� ����
double sum(int x, int y) {
	return x + y;
}
double sub(int x, int y) {
	return x - y;
}
float muti(int x, int y) {
	return x * y;
}
float dev(int x, int y) {
	return x / y;
}

int summ(int n, int c, int m) {
	int resome = 0;
	switch (c) {
	case '*':
		resome = muti(n, m);
		break;
	case '-':
		resome = sub(n, m);
		break;
	case '+':
		resome = sum(n, m);
		break;
	case '/':
		resome = dev(n, m);
		break;


	default:
		cout << "�߸��� �������Դϴ�." << endl;
	}
	if (c == 'c')
		return 0; // ���ư��� �� �� ����

	else if (c == 'q')
		return 0; // �����ϴ� ���𰡷� ����


	return resome;
}


