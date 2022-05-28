#include <stdio.h>

void say_hello(void);
//void함수를 먼저 선언해줘야 나중에 
//메인 함수에서 사용 가능

int main()
{
	int i = 0;
	

	say_hello();
	

	return 0;
}
void say_hello(void)
{
	printf("Hello, World\n");
}
