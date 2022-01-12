#include <stdio.h>

int main(void)
{
	int w,h,b;
	scanf("%d %d %d",&w,&h,&b);

	double result;
	
	result = ((double)w*h*b)/8/1024/1024;	

	printf("%.2lf MB",result);
	
	
	return 0;
}
