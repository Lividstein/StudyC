#include <stdio.h>

void say_hello(void);

int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;
	say_hello();
	//step into는 함수 안 까지 들어감
	//step over는 함수 안에 들어가지 않고 그냥 넘어감

	return 0;
}
void say_hello(void)
{	
	int x = 1;
	x = 10;
	printf("Hello, World\n");
}
