#include <stdio.h>
#include <conio.h>

int main()
{
    long x, carpim=1;

    for(x=1;x<=5;x++){
        carpim*=x;
        printf("%d! = %d\n", x,carpim);
    }
    getch();
    return 0;
}
