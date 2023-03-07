#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	int len = 0, i=0;
	printf("Enter the String : ");
	gets(str);
	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	printf("The Length of string %s is %d", str, len);
	return 0;
	}
