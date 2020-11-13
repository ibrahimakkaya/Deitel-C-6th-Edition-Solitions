#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int sayi;
	
	printf("******* Romen Rakamina Cevirmek Istediginiz Sayiyi Giriniz. *******\n");
	scanf("%d", &sayi);
	
	printf("Romen Rakaminiz : \a ");
	while(sayi!=0)
	{
		if(sayi>=1000)
		{
			sayi = sayi - 1000;
			printf("M");	
		}
		
		else if(sayi>=900)
		{
			sayi = sayi - 900;
			printf("CM");
		}
		
		else if(sayi>=500)
		{
			sayi = sayi - 500;
			printf("D");
		}
		else if (sayi >= 400)   // 400 -  cd
        {
           printf("CD");
           sayi = sayi - 400;
        }
		
		else if(sayi>=100)
		{
			sayi = sayi - 100;
			printf("C");
		}
		
		else if(sayi>=90)
		{
			sayi = sayi - 90;
			printf("XC");
		}
		
		else if(sayi>= 50)
		{
			sayi = sayi - 50;
			printf("L");
		}
		
		else if(sayi>=40)
		{
			sayi=sayi-40;
			printf("XL");
		}
		else if (sayi >= 10)    // 10 - x
        {
           printf("X");
           sayi = sayi- 10;           
        }
		
		else if(sayi>=9)
		{
			sayi = sayi - 9;
			printf("IX");
		}
		
			
		else if(sayi>=5)
		{
			sayi = sayi - 5;
			printf("V");
			
		}
		
		else if(sayi>=4)
		{
			sayi = sayi- 4;
			printf("IV");
		}

		else if (sayi >= 1)     // 1 - i
        {
           printf("i");
           sayi = sayi - 1;                                                                                   
        }
	
	}
}
	



