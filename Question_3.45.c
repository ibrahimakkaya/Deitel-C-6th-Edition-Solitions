#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	printf("Hipotenusun uzunlugunu giriniz: ");
	scanf("%d", &c);
	printf("Birbirine dik olan birinci kosenin uzunlugunu giriniz: ");
	scanf("%d", &b);
	printf("Birbirine dik olan ikinci kosenin uzunlugunu giriniz: ");
	scanf("%d", &a);
	
		if(pow(b,2)+pow(a,2) == pow(c,2))
			printf("Bu bir dik ucgendir.");
		else
			printf("Bu bir dik ucgen degildir.");
			
	return 0;
}
