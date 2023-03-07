//count number of 1's 
#include<stdio.h>
int main()
{
	int n,count=0;
	
	
	printf("enter any num:");
	scanf("%d",&n);
while(n!=0)
	{
	
	if(n&1)
	{
		count++;
	
    }n>>=1;
}
	
	
	
	printf("no. of 1's :%d",count);
}


/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number : ");
	scanf("%d", &n);
	int x = n & (n-1);
	int count = 1;
	while(x!=0)
	{
	count ++;
	x = x & (x-1);
	}
	printf("Number of 1'S is %d", count);
	return 0;
}*/

