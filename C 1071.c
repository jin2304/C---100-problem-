

#include <stdio.h>

int main(void)
{
	int n;

  label:	
    scanf("%d",&n); 
   
	
    if(n != 0) 
	{
	 printf("%d\n",n);
	 goto label;	
	}
    
    
 
	return 0;
	
}
