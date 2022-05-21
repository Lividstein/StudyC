#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전처리기 Preprocessor instruction
int main(void)
//main 함수 정의 시작
{ 
//영역(scope)의 시작
	int a;
	int b;
	int c;
//변수(variable) 선언(declaration)
	a = 1;
	b = 2;
//변수에 값 대입(assignment)
	c = a + b;
//변수에 연산(operation) 결과 대입
	printf("Result is %i", c);
//함수 호출(call up invoke)
	return 0;
//결과 값(value)을 반환(return)
}
//영역(scope)의 끝