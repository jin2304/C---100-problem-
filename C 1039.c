#include <stdio.h>

int main(void)
{
	
	long long int a,b;
	long long int sum = 0;
	scanf("%lld %lld",&a,&b);
	
	
	sum += a; //sum = sum+a;
	sum += b;
	
	printf("%lld",sum);
	
	return 0;
}
