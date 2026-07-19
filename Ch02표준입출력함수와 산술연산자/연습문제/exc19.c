#include <stdio.h>
int main()
{
	int x;
	printf("input integer : ");
	scanf("%d", &x);
	x = x+5;
	x = x - x%10;
	printf("결과 = %d\n", x);
}
