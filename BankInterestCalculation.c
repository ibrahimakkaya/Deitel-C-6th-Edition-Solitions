#include <stdio.h>
#include <math.h>
int main()
{
	double ana_para = 1000.0 , faiz = .05 , toplam;
	int i ; 
	
	for(i = 1 ; i <= 10 ; i++)
	{
		toplam = ana_para* pow((1 + 0.05), i );
		printf("Yil : %-15d , Toplam Para: %-25.10f\n", i , toplam);
	}
	
}
