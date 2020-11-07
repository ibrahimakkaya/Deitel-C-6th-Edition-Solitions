#include <stdio.h>

int main(){
	
	int i, j;
	
	printf("Yazdirmak istediginiz yildiz sayisini giriniz: ");
	scanf("%d", &i);
	
	for(j = 0 ; j < i ; j++)
		printf("*");
}
