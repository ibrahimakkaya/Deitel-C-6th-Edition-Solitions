#include <stdio.h>

int cikti(int the_number, int the_array[], int search_limit);

int main()
{
	int i;
	int numbers[20] = {0};
	int a_number;
	int inserted_number = 0;
	
	for(i=0 ; i <= 20 - 1 ; i++)
	{
		printf("10 ile 100 arasinda bir numara giriniz.\n");
		scanf("%d", &a_number);
		
		while((a_number<10) || (a_number>100))
		{
			printf("Girdiginiz numara 10 ile 100 arasinda olmalidir!\n");
			scanf("%d",&a_number);
		}
		
		if(cikti(a_number,numbers,inserted_number));
	else
	{
		printf("%d yeni bir numara\n", a_number);
		numbers[inserted_number] = a_number;
		++inserted_number;
	}
	}
	

	
}

int cikti(int the_number, int the_array[], int search_limit)
{

    int j;

    for (j = 0; j < search_limit; j++)
    {	
	if (the_number == the_array[j])
	    return 1;
	}


    return 0;

}
