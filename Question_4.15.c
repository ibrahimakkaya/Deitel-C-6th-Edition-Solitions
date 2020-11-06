#include <stdio.h>
#include <math.h>

int main()
{
    int yil, sayac;
    double miktar, anapara = 1000.0, oran=0.5;

    for(sayac=5;sayac<=10;sayac+=1){
        printf("%s%d faiz orani icin : \n\n", "%" , sayac );
        printf("%4s%21s\n", "Yil", "Faiz eklenmis paraniz\n");

        for(yil=1;yil<=10;yil++){
            miktar = anapara * pow(1.0+oran,yil);
            printf("%3d%21.2f\n\n",yil,miktar);
        }
        oran+=0.1;
    }

   
    return 0;
}
