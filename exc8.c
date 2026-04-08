#include <stdio.h>
int main()
{
	double a, b, c, decision;
	printf("계수 a, b, c 입력:");
	scanf("%lf%*c%lf%*c*lf", &a, &b, &c);
	decision = b*b - 4*a*c;
	printf("판별식 = %lf\n", decision);
}
