#include <stdio.h>
#include <math.h>

int main()
{
	float a,b;
	
	printf("En yakin sayiya yuvarlamak istediginiz sayiyi giriniz. \n");
	scanf("%f %f", &a, &b);
	
	
	printf("%f => %f \n %f  => %f\n", a , floor(a+.5), b, floor(b+.5));
}
