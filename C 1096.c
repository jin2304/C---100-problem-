#include <stdio.h>

int main(void)
{
    int array[20][20]={0};
	int i,j;
	int r,c;
	int n;
	scanf("%d",&n); //3
	
	for(i=1; i<=n; i++) //1,2,3
	{
		scanf("%d %d",&r,&c);
		array[r][c] = 1;	
	}
	
	for(i=1; i<20; i++)
	{
		for(j=1; j<20; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
