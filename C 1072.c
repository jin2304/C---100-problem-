#include <stdio.h>

int main(void)
{
	int n,a;
	scanf("%d",&n); 
	
	reget:
	scanf("%d",&a); 
	printf("%d\n",a);
	
	if(--n != 0) goto reget;
    

	return 0;
   }

