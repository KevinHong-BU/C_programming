#include <stdio.h>
int main()
{
	const double pi = 3.141592;
	double radius, surface, volume;

	printf("구의 반지름 : ");
	scanf("%lf", &radius) ;
	
	surface = 4.*pi*radius*radius;
	volume = 4./3.*pi*radius*radius*radius;
	
	printf("구의 표면적 = %f\n", surface);
	printf("구의 부피 = %f\n", volume);
}
