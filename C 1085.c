#include <stdio.h>

int main(void)
{
    long long h,b,c,s;
    scanf("%d %d %d %d",&h,&b,&c,&s);
    double result;
    

    
    result = ((double)h*b*c*s)/8388608;
    
    printf("%.1lf MB",result);
    

	return 0;
}


