#include <stdio.h>


int main()
{
   int puan; 
   int aSay = 0; // Girilen A sayisi 
   int bSay = 0; // Girilen B sayisi 
   int cSay = 0; // Girilen C sayisi 
   int dSay = 0; // Girilen D sayisi 
   int fSay = 0; // Girilen A sayisi 
   printf( "Harf notunu girin.\n"  );
   printf( "Cikmak icin EOF degerini girin.\n");
   
   while ( puan != 'e' )
   {
   		scanf("%c", &puan);

     
        if ( puan == 'a')
        {
          ++aSay; 
        }
        else if ( puan == 'A')
    	{
   	  		++aSay; 
     	}
     	else if(puan == 'b')
     	{
     	  	++bSay; 
     	}
     	else if ( puan == 'B')
     	{
       	  	++bSay;
     	}
     	else if(puan == 'c')
     	{
      	  	++cSay; 
     	}
     	else if ( puan == 'C')
     	{
      	  ++cSay; 
     	}
     	else if(puan == 'd')
     	{
      	  ++dSay; 
     	}
     	else if ( puan == 'D')
     	{
       	  ++dSay; 
     	}
     	else if(puan == 'f')
     	{
    	  ++fSay; 
     	}
     	else if ( puan == 'F')
     	{
       	  ++fSay; 
     	}
     
     	else
     	{
  	 		if (puan == ' ')
  	 		{
  	 
  	 		}
  	 		else if (puan == '\n')
  	 		{
  	
  	 		}
  	 		else
  	 		{
      	    
             	printf( " Farkli bir deger girdiniz." );
  	 		}
     }
   }
   printf( "\nHer bir puan turunden alinan notlar:\n" );
   printf( "A: %d\n", aSay ); 
   printf( "B: %d\n", bSay );
   printf( "C: %d\n", cSay );  
   printf( "D: %d\n", dSay ); 
   printf( "F: %d\n", fSay ); 
  

}
