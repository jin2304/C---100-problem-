#include <stdio.h>

int main(void)
{
	
	int h,w;
	int n; //������ ���� 
	int l,d,x,y; //����,����,��ǥ(x,y)  d���� ����:0 ����:1  
	int k,i,j;
	
	scanf("%d %d",&h,&w);
	scanf("%d",&n);  
	
	
	int a[100][100] = {0};
	
	for(k=1; k<=n; k++)
	{
	    scanf("%d %d %d %d",&l,&d,&x,&y);
	    //2 0 (1,1)
	    for(i=0; i<l; i++)
	    {
	    	
	     if(d == 0) // ������ �����϶� 
		 {
		    a[x][y+i] = 1;
		 }
		 else if(d == 1) // ������ �����϶� 
		 {
		    a[x+i][y] = 1;	
		 }
		 	
		}
	   
	}
	
	for(i=1; i<=h; i++)
		{
			for(j=1; j<=w; j++)
			{
				
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
