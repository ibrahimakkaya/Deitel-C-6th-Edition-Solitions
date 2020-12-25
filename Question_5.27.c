#include <stdio.h>
#include <math.h>

int PrimeNumber(int number);

int main() 
{
    
    int num = 1;
    int count = 0;

    
    while (num <= 10000)
	{
       
        if(PrimeNumber(num))
		{
            
            printf("%5d ", num);
            
            ++count;
            
            if(count % 10 == 0)
			{
                printf("\n");
            }
        }
        
        num++;
    }

    return 0;
}

int PrimeNumber(int number)
{
    int i;
   
    for(i = 2; i <= (int) sqrt(number); i++)
	{
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}
