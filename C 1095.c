#include <stdio.h>

int main(void)
{
	int array[10001]={0};
	int i,n;
	scanf("%d",&n); 
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&array[i]); 
	}
	
	int minimum;
	minimum = array[0];
	
	for(i=1; i<n;i++)
	{
		if(minimum > array[i])
		{
			minimum = array[i];	
		}
		
	}
	
	printf("%d",minimum);

		
	return 0;
}
