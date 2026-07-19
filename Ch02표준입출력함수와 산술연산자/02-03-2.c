#include <stdio.h>
int main()
{
	int x=10;
	printf("x = %d\n", ++x); //전위
	x=10;
	printf("x = %d\n", x++); //후위
	x=10;
	printf("x = %d\n", --x); //전위
	x=10;
	printf("x = %d\n", x--); //후위
}
