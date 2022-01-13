#include <stdio.h>

int main(void)
{
	int a[11][11]={};
	int i,j;
	int x = 2;
	int y = 2;
	
	
	for(i=1;i<=10;i++)
	{
	 for(j=1; j<=10;j++)
	 {
	 	scanf("%d",&a[i][j]);	
	 }	
	 
	}	

	while(1)
	{		
			if(a[x][y] == 2)
			{
				a[x][y] = 9;
				break;
		    }
			else if(a[x][y] == 0)
			{
				
				a[x][y] = 9;
				y=y+1;	
			}
			else if(a[x][y] == 1)
			{	
				
				x=x+1;
				y=y-1;
				if(a[x][y] == 2)
				{
					a[x][y] = 9;
					break;
				}
				a[x][y] = 9;
				y=y+1;
				
			}		
	}
		
	for(i=1;i<=10;i++)
	{
	 for(j=1; j<=10;j++)
	 {
	 	printf("%d ",a[i][j]);	
	 }	
	 printf("\n");	
	}	
	

	
	
	return 0;
}
