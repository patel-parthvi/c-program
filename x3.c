//3.reverse the given num
#include<stdio.h>
int main()
{
	int num;
	int n,i,reverse=0,reminder;
	printf("enter a number:\n");
	scanf("%d",&num);
	
	
	while(num!=0)
	{
		reminder=num%10;
		reverse=reverse*10+reminder;
		num/=10;
	
	}
	printf("reversed num:%d",reverse);
		
	
		
		
	
	
	
}
