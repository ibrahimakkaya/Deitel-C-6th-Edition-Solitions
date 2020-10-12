#include <stdio.h>

int main()
{
	int satir,sutun,deger;

	for(satir=0; satir<15; satir+=3)
	{
		for(sutun=1;sutun<=4;sutun++)
		{
			deger=2*sutun+1+satir;
			printf("%d\t", deger);
			if(sutun%4==0)
			printf("\n");
		}
		
	}
}
