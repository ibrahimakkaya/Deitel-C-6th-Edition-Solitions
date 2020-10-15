#include <stdio.h>
#include <conio.h>

int main()
{
    int satir=1, sutun, uzunluk;

    printf("Karenin bir kenarinin uzunlugunu giriniz: ");
    scanf("%d", &uzunluk);

    while(satir<=uzunluk)
	{

        if(satir==1)
		{
           sutun=1;
           while(sutun<=uzunluk)
		   {
              printf("*");
              sutun++;
		   }
        printf("\n");
         satir++;

           }

        else if(satir==uzunluk)
		{
            sutun=1;
            while(sutun<=uzunluk)
			{
                printf("*");
                sutun++;
            }
        printf("\n");
        satir++;
        }

        else 
		{
            sutun=1;
            while(sutun<=uzunluk)
			{
                if(sutun==1) 
				{
                    printf("*");
                }
                else if(sutun==uzunluk)
				{
                    printf("*");
                }
                else 
				{
                    printf(" ");

                }
            sutun++;
            }
            printf("\n");
            satir++;
    	}
    }

    getch();
    return 0;
}
