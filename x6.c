//expand str

#include<stdio.h>
#include<string.h>
int main()
{char a[20];
int i,j;
printf("Enter the Expression : ");
scanf("%s", &a);
int start, end;
int l = strlen(a);

if(a[0] != 45)
{
for(i = 0; i<l; i++)
{
if(a[i] == 45)
{
start = a[i-1];
end = a[i+1];
for(j = start; j<=end; j++)
{
printf("%c", j);
}
}
}
}
else
{
for(i = 1; i<l; i++)
{
if(a[i] == 45)
{
start = a[i-1];
end = a[i+1];
for(j = start; j<=end; j++)
{
printf("%c", j);
}
}
}
}
return 0;
}



