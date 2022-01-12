#include <stdio.h>

int main(void)
{

    int a,m,d,n;
    int i;
	scanf("%d %d %d %d",&a,&m,&d,&n);
	long long int result;
	
	result = a;
	
	for(i=1; i<n; i++)
	{
		result = result * m+d;
	}
	printf("%lld\n",result);
	
	return 0;
}

