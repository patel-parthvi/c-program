
//invert a bit
/*#include<stdio.h>
int main()
{
	int rem,num,base=1,b=0,invert,j;
	int a[8];
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
		{
		rem=num%2;
		b=b+rem*base;
		num=num/2;
		base=base*10;
		
		}
		printf("%d",~b);
		scanf("%d",&b);
		b=a[8];
		
		for(j=0;j<=3;j++)
		{
			
	
		if(a[j]=='1')
		{
			a[j]==0;
		}
		else if(a[j]=='0')
		{
			a[j]==1;
		}
		
			
		}
		a[j]<<=1;
		printf("%d",a[j]);
}*/


/*#include<stdio.h>
#include<stdlib.h>
int invert(const int, int, int);
int main(int argc, char **argv)
{
	int i;
	int position;
	int count;
	printf("enter a number:\n");
	scanf("%d", &i);
	
	scanf("%d", &position);
	
	scanf("%d", &count);
	printf("The inverted integer is : \t%d\n", invert(i, position, count));
	return 0;
	}
	
int invert(const int i, int position, int count)
	{
	int mask = ~(~0 << count) << position;
	return i ^ mask;
	}*/
	
	
	#include <stdio.h>
	#include <stdlib.h>
	int change(const int, int, int);
	int main(int argc, char **argv)
	{
	int *i = (int*)malloc(sizeof(int));
	int *p = (int*)malloc(sizeof(int));
	int *n = (int*)malloc(sizeof(int));
	printf("Enter the integer: ");
	scanf("%d", i);
	printf("Enter the position: ");
	scanf("%d", p);
	printf("Enter the amount of bits you want to invert: ");
	scanf("%d", n);
	printf("Inverted integer: \t %d \n", change(*i, *p, *n));
	 free(i);
	 free(p);
	 free(n);
	 return 0;
	 }
	 int change(const int i, int p, int n)
	 {
	 int mask = ~(~0<< n) << p;
	 return i^mask;
	 }
