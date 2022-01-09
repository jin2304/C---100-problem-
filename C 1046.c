#include <stdio.h>

int main(void)
{
	int a,b,c;
	int sum = 0;
	scanf("%d %d %d",&a,&b,&c);
	
	sum = a + b + c;
	printf("%d\n",sum);
	printf("%.1f",(float)sum/3);	
	


	return 0;			
}
