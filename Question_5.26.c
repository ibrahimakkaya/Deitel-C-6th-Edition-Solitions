#include<stdio.h>

int perfect(int x);

int main()
{

    int a, b, c;

    printf("\nLutfen sayi giriniz: ");
    scanf("%d", &a);
    printf("Mukemmel sayilarin listesi 1 ve  %d arasinda\n", a);

    for (c = 1; c <= a; c++) {

	b = perfect(c);
	if (b == c) {
	    printf("%d\n", c);
	}

    }

    return 0;
}

int perfect(int x)
{
    int i, sum = 0;

    for (i = 1; i < x; i++) {
	if (x % i == 0)
	    sum += i;
    }

    return sum;
}
