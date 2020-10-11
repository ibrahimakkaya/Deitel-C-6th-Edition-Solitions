#include <stdio.h>

int main()
{
	int i,j,k,l;
	i=1;
	j=2;
	k=2;
	l=2;
	while(i<10)
	{
		printf("%d\n",i);
		i++;
	}
	while(i<100)
	{
		printf("%d\n",i);
		i=10*j;
		j++;
		
		
	}
	while(i<1000)
	{
		printf("%d\n",i);
		i=100*k;
		k++;
		
	}
	while(i<=10000)
	{
		printf("%d\n",i);
		i=1000*l;
		l++;
		
	}
}
