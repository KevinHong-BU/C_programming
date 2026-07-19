#include <stdio.h>
int main()
{
	const double pi = 3.141592;
	double radius, surface, volume;

	printf("备狼 馆瘤抚 : ");
	scanf("%lf", &radius) ;
	
	surface = 4.*pi*radius*radius;
	volume = 4./3.*pi*radius*radius*radius;
	
	printf("备狼 钎搁利 = %f\n", surface);
	printf("备狼 何乔 = %f\n", volume);
}
