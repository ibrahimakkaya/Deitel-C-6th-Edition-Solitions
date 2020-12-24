#include <stdio.h>

int kare(int kenar, char karakter);

int main()
{
	int kenar;
	char sekil;
	printf("Ilk olarak kenar uzunlugunu sonrasinda bastirmak istediginiz karakteri giriniz.");
	scanf("%d %c", &kenar, &sekil);
	kare(kenar,sekil);
	
}

int kare (int kenar, char karakter)
{
	int i,j;
	for(i = 0 ; i < kenar ; i++)
	{
		for(j=0 ; j < kenar ; j++)
		{
			printf("%c", karakter);
		}
		printf("\n");
	}

}
