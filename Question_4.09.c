#include <stdio.h>

int main()
{
    int x, sayi, sayac, toplam;
    sayac=0;
	toplam=0;

    scanf("%d", &x);

    for(;sayac<x;sayac++){
        scanf(" %d", &sayi);
        toplam+=sayi;
    }

    printf("Toplam: %d", toplam);

  
    return 0;
    
}
