#include <stdio.h>

/*
a) ��ki Say� giriniz� mesaj�n� ekrana yazd�r�n.
b) x, y ve z de�i�kenlerinin toplam�n� p de�i�kenine atay�n�z.
c) A�a��daki ko�ul, bir if/else se�im yap�s� i�erisinde test edilmektedir: m�nin de�eri v�nin iki kat�ndan b�y�kt�r.
d) s, r ve t de�i�kenleri i�in klavyeden de�erler al�n. */

int main()

{
	// a)
	printf("Iki sayi giriniz.\n\n"); 
	
	// b)
	int x,y,z,p;
	p=x+y+z;
	printf("%d\n\n", p); 
	
	// c)
	
	int m,v;
	printf("Iki sayi giriniz:");
	scanf("%d %d", &m, &v);
		
		if(m>2*v)
			printf("Ilk girdiginiz sayi, ikinci girdiginiz sayinin iki katindan buyuktur.\n\n");
		else
			printf("Ilk girdiginiz sayi, ikinci girdiginiz sayinin iki katindan buyuk degildir.\n\n"); 
			
	//  d)
	int s,r,t;
	scanf("%d %d %d", &s,&r,&t);
	
			
	
	
	
}
