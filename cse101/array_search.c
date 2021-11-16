#include<stdio.h>
int main ()
{
	int size ,i;
	printf("enter the size of the array :");
	scanf("%d",&size);
	
	int arr [size],loc,num;
	printf("\n enter the array elements:");
	for (i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
    } 
    printf("\nwhich number you want to find?:");
	scanf("%d",&num);
	//logic for linear search 
	for(i=0; i<size; i++)
	{
		if (arr[i]==num)
		{
			printf("%d is present in the array at location =%d",num,(i+1));
			break;
		}
	}
		if(i==size)
		printf("%d is not present in the array !!" ,num);
		return 0;
	}
	
