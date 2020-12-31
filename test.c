#include <stdio.h>
#include <stdlib.h>

int func(void)
{
	int a;
	return a;
}

int main(void)
{
	int b;
	char tmp_str[100];
	char *tmp;
	printf("hello world\n");
	
	sprintf( tmp_str, "%s", "HEX16" );
	
	b = func();
	
	tmp = (char *)malloc(1024);
	
	return 0;
}
