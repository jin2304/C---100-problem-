#include <stdio.h>

int main(void)
{
	int n,i,t;
	scanf("%d",&n);
	int array[10001]={0};

	
	for(i=1; i<=n; i++) 
	{    
  		scanf("%d",&array[i]);
	}
		
	
	for(i=n; i>0; i--)
	{
		printf("%d ",array[i]);
	}
		
	return 0;
}
