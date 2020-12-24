#include <stdio.h>

int uslu(int, int);

int main()
{
	int x,y;
	printf("Lutfen ilk olarak tabani sonrasinda ussu giriniz.");
	scanf("%d %d", &x , &y);
	printf("%d", uslu(x,y) );
	
}

int uslu(int a, int b)
{
	int sonuc = 1;
	int i;
	for (i = 0 ; i < b ; i++)
	{
		sonuc = sonuc * a;
	}
	return sonuc;
}
