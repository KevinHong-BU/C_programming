#include <stdio.h>
int main()
{
	int a=150, b=2100, c=6300;
	int change;

	change = 50000 - a*3 - b*5 - c*3;
	printf("거스름돈 = %d\n", change);
}
