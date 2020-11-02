#include <stdio.h>
#include <conio.h>

int main()
{
    int x=1;
    double pi=0, ilk=1;

    for(x=1;x<=5000;x++){

        if(x%2!=0){
           pi= pi + (4/ilk);
           printf("%f\n", pi);
           }

        else{
           pi= pi -(4/ilk);
           printf("%f\n", pi);
        }
        ilk+=2;
}
    getch();
    return 0;
}
