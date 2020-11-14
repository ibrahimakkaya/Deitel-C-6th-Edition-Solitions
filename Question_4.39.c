
#include <stdio.h>
 
int main () 
{

   
   int a = 10;

   
   do 
   {
   
      if( a == 15) 
	  {
         
         a = a + 1;
         continue;        // if dongusunde a'yi her dongude 1 arttiriyoruz ama sadece a 15 ken donguye giriyor
         				//a=15 oldugunda if yapisindaki a +=1 den dolayi zaten a artmis olacak tekrar arttirmaya gerek yok
         				// ama do while icinde de a++ var. Tekrar artmasini istemiyorsak bir sonraki basamagi atlamaliyiz bunun icin continue kullaniyoruz.
      }
		
      printf("value of a: %d\n", a);
      a++;
   
   } while( a < 20 );
 
   return 0;
}
