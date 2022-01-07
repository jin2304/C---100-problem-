#include <stdio.h>

int main(void)
{
	char s[2001];
	fgets(s,2001,stdin);

	printf("%s",s);
		
	return 0;
}


