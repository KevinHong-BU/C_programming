#include <stdio.h>
int main()
{
	double Kmileage=11.5; // kilometer/litter
	double Km, gallon=15., Mile;
	const double M2K=1.6, G2L = 3.78;
	Km = gallon*G2L * Kmileage; // 15갤런일 때 달릴 수 있는 거리Km
	Mile = Km / M2K;
	printf("%fKm, %f Miles\n", Km, Mile);
	printf("%f Miles/Gallon", Kmileage*G2L/M2K );
}
