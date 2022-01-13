#include <stdio.h>

int main(void)
{
	int array[24]={0};
	int i,n,t;
	scanf("%d",&n);

	
	for(i=1; i<=n; i++)
	{
		scanf("%d",&t);
		
		array[t] = array[t] + 1;
	
	}
		
	
	for(i=1; i<=23; i++)
	{
		printf("%d ",array[i]);
	}
		
	return 0;
}
