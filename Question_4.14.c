#include <stdio.h>

int main()
{

int i, faktoriyel, sayi;
faktoriyel = 1;

printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz.");
scanf("%d", &sayi);

while(sayi>0)
{
	faktoriyel = faktoriyel * sayi;
	sayi--;
	
}

printf("Girdiginiz sayinin faktoriyeli : %d" , faktoriyel);


}
