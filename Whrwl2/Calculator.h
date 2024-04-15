#include <iostream>
#include <string>
#include <cstdlib>

// 헤더 파일과 cpp파일에 클래스에 대한 개념을 아직 모름..
//#include "Calculator.cpp"
//using namespace std; // std:: 를 기본으로 작성하고있다 라고 생략하게 해줌
//double sum(int x, int y) {
//	return x + y;
//}
//double sub(int x, int y) {
//	return x - y;
//}
//float muti(int x, int y) {
//	return x * y;
//}
//float dev(int x, int y) {
//	return x / y;
//}
//
//int summ(int n,int c,int m) {
//	int resome = 0;
//	switch (c) {
//	case '*':
//		resome = muti(n, m);
//		break;
//	case '-':
//		resome = sub(n, m);
//		break;
//	case '+':
//		resome = sum(n, m);
//		break;
//	case '/':
//		resome = dev(n, m);
//		break;
//
//	
//	default:
//		cout << "잘못된 연산자입니다." << endl;
//	}
//	if (c == 'c')
//		return 0; // 돌아가는 수 로 변경
//
//	else if (c == 'q')
//		return 0; // 종료하는 무언가로 변경
//
//	
//	return resome;
//}