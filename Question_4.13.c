#include <stdio.h>


int main()
{
    int x, carpim=1;

    for(x=1;x<=15;x+=2){
        carpim*=x;
    }

    printf("1 ile 15 arasindaki teksayilarin carpimi %d", carpim);

    getch();
    return 0;
}

