#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	printf("Ucgenin kenarlarini giriniz: ");
	scanf("%f %f %f", &a, &b,&c );
		
		if(fabs(c-b)<a && a<c+b)
			printf("Bu uc deger ucgen olusturabilir.");
		else
			printf("Bu uc deger ucgen olusturamaz.");
		
	
}
