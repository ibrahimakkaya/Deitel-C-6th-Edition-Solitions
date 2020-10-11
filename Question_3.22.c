#include <stdio.h>

int main ()
{
	int x,y;
	x=5;
	y=5;
	printf("%d\n",x++); //Ilk olarak x'i yazdirdi sonra degerini bir arttirdi ve suan bellekte.
	printf("%d",++y);   //y'nin degerini bir arttirdi ve arttirilan degeri yazdi.
	
	return 0;
}
