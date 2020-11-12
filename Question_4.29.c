#include <stdio.h>

int main(){
	
	int x = 7 , y = 9 , a = 9 , b = 4 , g = 4;
	
	printf("%d", (!(x < 5) && !(y <= 7) ) == !(a == b) || !(g != 5));
}
