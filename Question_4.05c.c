#include <stdio.h>

int main()
{
	
	int tamsayi;
	printf("Ilk olarak karakter sonrasinda yazdirilmasini istediginiz sayiyi giriniz.");
	char karakter;
	karakter=getchar();
	scanf("%d", &tamsayi);
	
	printf("Tamsayi: %d\n Karakter %c\n", tamsayi , karakter);
}
