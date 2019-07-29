#include <stdio.h>

int main(void)
{
	char str1[15]="hello world";
	char str2[]="hello world!!";
	printf("%s",str1);
	puts(str1);
	strcpy(str1,str2);
	puts(str1);
	printf("%u\n",str1);
	printf("%u",str2);
	return 0;
}

