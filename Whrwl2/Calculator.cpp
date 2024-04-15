
#include "Calculator.h"
//#summ (전처리 처리 방법을 까먹음)
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
		cout << "첫번째 수 입력";
		cin >> n;
		cout << "연산자를 입력해주세요 ex + - * / 종료를 원하시면 q 리셋은c";
		cin >> hamsu;
		if (hamsu == 'c')
			print();
		cout << "두번째 수 입력";
		cin >> m;

		return summ(x, hamsu, y);
	}
	
};

using namespace std; // std:: 를 기본으로 작성하고있다 라고 생략하게 해줌
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
		cout << "잘못된 연산자입니다." << endl;
	}
	if (c == 'c')
		return 0; // 돌아가는 수 로 변경

	else if (c == 'q')
		return 0; // 종료하는 무언가로 변경


	return resome;
}


