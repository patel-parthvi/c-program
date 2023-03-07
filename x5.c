#include<stdio.h>
#include<math.h>
/*int main()
{
	int a[100];
	int n,i;
	
	printf("enter any array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter any num:");
	scanf("%d",&n);
	
	for(i=0;i<=5;i++)
	{
	
	if(n==a[i])
	{
		return i;
	}
	else
	{
	printf("value is not found in %d 
	
}

	
	
}*/



/*int arr(int a[],int n,int size,int i)
{
	for(i=0;i<=size;i++)
	{
		if(a[i]==n)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
	
}
int main()
{
	int a[100];
	int n;
	int size=0,i;
	printf("enter size of an array:\n");
	scanf("%d",&size);
	printf("enter an array:\n");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a number:");
	scanf("%d",&n);
	size=sizeof(a)/sizeof(int);
	int index=arr(a,n,size,i);
	if(a[i]==n)
	{
	printf("%d is found at position at %d ",n,i);
	}
	else
	{
	printf("-1");
	}		
	
}




int linearSearch(int arr[], int size, int element)
{
	int i;
for(i=0; i<size; i++)
{
if(arr[i] == element)
{
return i;
}
}
return -1;
}
int main()
{
int arr[5];
int element,i;
printf("Enter the Elements of the array : ");
for(i=0 ; i<5 ; ++i)
{
scanf("%d", &arr[i]);
}
printf("Enter the element : ");
scanf("%d",&element);
int size = sizeof(arr) / sizeof(int);
int SearchIndex = linearSearch(arr, size, element);
printf("The Element %d was found at index %d\n", element, SearchIndex);
return 0;
}*/

//expand str



int findIndex(int arr[], int n, int searchValue)
{
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 5, 9, 11};
    int n = sizeof(array) / sizeof(array[0]);
    int searchValue;

    printf("Enter the value to search: ");
    scanf("%d", &searchValue);

    int index = findIndex(array, n, searchValue);

    if (index == -1) {
        printf("%d not found in the array\n", searchValue);
    } else {
        printf("%d found at index %d\n", searchValue, index);
    }

    return 0;
}

