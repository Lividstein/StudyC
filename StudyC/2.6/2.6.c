#include <stdio.h>

int main()
{
	// print formatted
	printf("\"The truth is ...\nI am Ironman.\"");
	// \n: Escape sequence, 줄바꿈
	printf("\n");
	int x, y, z;

	x = 1;
	y = 4;

	z = x + y;

	printf("The answer is %i\n", 1+4);
	printf("The answer is %i\n", z);
	printf("%i+%i=%i", x, y, z);
	printf("\a");
	return 0;
}