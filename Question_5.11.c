#include <stdio.h>
#define BOYUT 10

int main()
{
	int a[BOYUT] = {2,4,5,6,33,55,1,443,54,78};
	int i,tur,tut,flag;
	
	printf("Diziler orjinal siralamasinda\n");
	for(i=0 ; i<=BOYUT - 1 ; i++)
	{
		printf("%4d ", a[i]);
	}
	printf("\n");
	flag = 0;

	for(tur = 1 ; tur <= BOYUT - 1 ; tur++)
	{
		flag = 0;
		for(i=0; i <=BOYUT -2 ; i++)
		{
			if(a[i]>a[i+1])
			{
				tut = a[i];
				a[i] = a[i+1];
				a[i+1] = tut;
				
				flag = 1;
				
			}
		}
		
	if(!flag)
		break;
	}
	
	
	
	printf("\n Veriler artan siralamada\n");
	
	for(i=0 ; i <= BOYUT -1 ; i++)
		printf("%4d", a[i]);
		
	printf("\n");

	return 0;

}
