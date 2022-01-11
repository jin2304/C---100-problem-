#include <stdio.h>

int main(void)
{
   int n,i;
   int sum = 0;
   scanf("%d",&n);
   
	
  
 
  	
  	for(i=0; i<=n; i++)
    {
    	
   	 sum += i;
   	 
	   	if(sum>=n)
	   	{
	   	  printf("%d\n",i);
		  break;	
		}
	 
    }	
  	
  	
  	
	
	return 0;
}
