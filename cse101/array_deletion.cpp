#include<stdio.h>
int main ()
{
	int size ,i;
	printf("enter the size of the array :");
	scanf("%d",&size);
	
	int arr [size],loc,val;
	printf("\n enter the array elements:");
	for (i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
    } 
	printf("\n array before deletion :\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nenter the location you want to delete :");
	scanf("%d",&loc);
	//logic for deletion
	if(loc >= size+1)
	printf("\n deletion not possible!!");
	else
	{
		for (i=loc-1; i<size-1; i++)
		{
			arr[i]=arr[i+1];
		}
		size=size-1;
		printf("\n array after deletion :\n");
		for(i=0; i<size; i++)
		printf("%d",arr[i]);
	}
		return 0;
	}
