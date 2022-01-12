#include <stdio.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);
	int sum = 0;
	
	for(i=0; ; i++)
	{
		sum += i;
		if(sum>=n)
		{
		 printf("%d",sum);	
		 break;
		}
		
	}
	

	
	
	
	return 0;
}
