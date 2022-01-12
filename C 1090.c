#include <stdio.h>

long long int pow_function(int r,int n)
{
	
	if(n == 0)
	{
		return 1;
	}
	
  	return r * pow_function(r,n-1);
	
}

int main(void)
{
	int a,r,n;
	scanf("%d %d %d",&a,&r,&n);
	long long int result;
	
	
	result = a*pow_function(r,n-1);
	
 	printf("%lld",result);
	
	
	
	return 0;
}

