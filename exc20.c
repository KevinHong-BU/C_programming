#include <stdio.h>
int main()
{
	double weight, height;
	double BMI;
	printf("¸ö¹«°Ô(Kg) : ");
	scanf("%lf", &weight);
	printf("Å°(m) : ");
	scanf("%lf", &height);
	BMI = weight / (height*height);
	printf("BMI = %f\n", BMI);
}
