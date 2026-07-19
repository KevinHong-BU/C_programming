#include <stdio.h>
int main()
{
	double weight, height;
	double BMI;
	printf("몸무게(Kg) : ");
	scanf("%lf", &weight);
	printf("키(m) : ");
	scanf("%lf", &height);
	BMI = weight / (height*height);
	printf("BMI = %f\n", BMI);
}
