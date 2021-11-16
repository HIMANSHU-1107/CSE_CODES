#include<stdio.h>
int main ()
{
	int size ,i;
	printf("enter the size of the array :");
	scanf("%d",&size);
	
	int arr [size],loc,val;
	printf("\n enter teh array elements:");
	for (i=0;i<size; i++)
	{
		scanf("%d",&arr[i]);
    } 
	printf("\n array before insertion :\n");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n size of the array before insertion =%d",size);
	printf("\n at what location you want to add element ?");
	scanf("%d",&loc);
	printf("\n enter the new value to be added :");
	scanf("%d",&val);
    // inc the size of array by one
	
	for(i=size-1; i>=loc-1;i--)
	{
		arr[i=1]=arr[i];
	}
	arr[loc-1]=val;
	size=size+1;
	printf("\n array after insertion :\n");
	for(i=0;i<size;i++)
	{
	printf("%d",arr[i]);
	}
	printf("\n array size after the insertion=%d",size);
	return 0;
}
