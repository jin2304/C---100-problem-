#include <stdio.h>

int main(void)
{
	char s1[100];
	scanf("%s",s1);
	
	int i =0;
	for(i=0; i< s1[i] != '\0'; i++)
	{
		printf("\'%c\'\n",s1[i]);
	}
	

	return 0;
}
