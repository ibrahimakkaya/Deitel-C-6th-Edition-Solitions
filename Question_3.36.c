#include <stdio.h>
#include <math.h>


int main()
{
	int sayi,yeni_sayi,toplam,birler_basamagi,us;
	toplam = 0;
	us = 1;
	printf("Ikilik sistemde bir sayi giriniz: ");
    scanf("%d", &sayi);
	birler_basamagi=sayi%10; //While dongusunde birler basamagindan degil onlar basamagindan baslatarak yazacagim icin birler basamagini burda tanimliyorum.
		while((sayi/10)!=0)  //Sayi 10'dan kucukse direkt olarak birler_basamagini hesapladik zaten donguye girmesine gerek yok. Dongude 10'dan kucuk hale geldiyse artik basamak kalmamis demektir.
		{
			sayi=sayi/10; //Her bir basamakta hareket etmek icin 10'a boluyoruz bu sayede basamakta sola dogru kayiyoruz.
			yeni_sayi=sayi%10; // Bu kod ile de basamaktaki sayiyi buluyoruz.
			toplam = toplam + (yeni_sayi * pow(2,us)); // Basamaktaki sayiyla basamak degerini carpiyoruz(onlar basamagindan basladigimiz icin us=1) ve toplama atiyoruz cunku her basamak icin ayri ayri bulup tek bir yerde toplamaliyiz.
		}
		
		toplam = toplam + (birler_basamagi * pow(2,0)); // Birler basamagini bulmustuk(direkt birler_basamagini da yazabilirdik pow'a gerek yok bu satirda) ve dongudeki toplamla toplayip toplama atiyoruz.
		
	printf("\nSayinin onluk tabandaki degeri %d dir.", toplam);
}
