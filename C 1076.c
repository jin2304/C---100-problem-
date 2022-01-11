#include <stdio.h>

int main(void)
{
	char c;
	char n = 'a';
	scanf("%c",&c);
	
	
	do{
		
	printf("%c\n",n);
	n++;	
		
	}while(n <= c);
	
	
	return 0;
}

