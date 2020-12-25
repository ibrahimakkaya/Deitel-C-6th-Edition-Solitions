#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int a, b, sonuc;

    srand(time(NULL));

    a = rand() % 9 + 1;
    b = rand() % 9 + 1;

    printf("%d carpi %d kactir? :", a, b);
    scanf("%d", &sonuc);

    while (sonuc != a * b) {
	printf("Hayir lutfen tekrar dene: ");
	scanf("%d", &sonuc);

    }

    printf("Helal BEE!\n");
    return 0;



}
