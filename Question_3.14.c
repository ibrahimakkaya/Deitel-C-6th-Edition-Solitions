#include <stdio.h>

/*
a) “Ýki Sayý giriniz” mesajýný ekrana yazdýrýn.
b) x, y ve z deðiþkenlerinin toplamýný p deðiþkenine atayýnýz.
c) Aþaðýdaki koþul, bir if/else seçim yapýsý içerisinde test edilmektedir: m’nin deðeri v’nin iki katýndan büyüktür.
d) s, r ve t deðiþkenleri için klavyeden deðerler alýn. */

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
