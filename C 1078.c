#include <stdio.h>

int main(void)
{
	int n,i;
	int sum = 0;
	scanf("%d",&n);
	
	for(i=0; i<=n; i=i+2)
	{
		sum += i;
	}

	printf("%d",sum);
	
	return 0;
}
