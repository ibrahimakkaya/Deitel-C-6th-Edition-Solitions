#include <stdio.h>
#include <math.h>

double hipotenus(double, double);

int main()
{
	double x,y;
	printf("Lutfen ucgenin dik kenarlarini giriniz.");
	scanf("%lf %lf", &x , &y );
	printf("Hipotenus : %.2f", hipotenus(x,y));
	
}
double hipotenus(double a , double b)
{
	double hipo;
	hipo = pow(a,2)+pow(b,2);
	return sqrt(hipo);
}
