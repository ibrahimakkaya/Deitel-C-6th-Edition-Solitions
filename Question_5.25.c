#include <stdio.h>

float enkucuk(float a, float b, float c);

int main()
{
	float x,y,z;
	printf("Uc adet sayi giriniz.");
	scanf("%f %f %f", &x , &y, &z);
	printf("%.2f", enkucuk(x,y,z));
	
}
float enkucuk(float a , float b, float c)
{
	float min;
	if(a>b)
	{
		min = b;
	}
	else if (b > c)
	{
		min = c;
	}
	else
	{
		min = a;
	}
	return min;
}
