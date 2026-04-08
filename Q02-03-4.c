#include <stdio.h>
int main()
{
	int x=239405900, a, b, c;
	printf("%d = ", x);
	a = x / 100000000;
	x = x % 100000000;
	b = x / 10000;
	c = x % 10000;
	printf("%d¾ï %d¸¸ %d¿ø\n", a, b, c);
}
