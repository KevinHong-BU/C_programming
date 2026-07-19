#include <stdio.h>
#include <math.h>
int main()
{
	double side, area;

	printf("정삼각형의 한 변 : ");
	scanf("%lf", &side);

	area = sqrt(3.)/4.*side*side;
	
	printf("삼각형의 면적 = %f\n", area);
}
