#include <stdio.h>

int main()
{
	float x;
	for (x = .000001 ; x<= .00001 ; x+= .000001)
		printf("%-7f\n",x);
}
