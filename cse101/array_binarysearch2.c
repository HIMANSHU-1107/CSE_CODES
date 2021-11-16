//binary sesarh using user input
#include <stdio.h>
int main()
{
	int low,high,mid,size,i,item;
	printf("enter the size of the array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("\n enter the array of the array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	print("\n array created is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n eneter the value for searching :");
	scanf("%d",&item);
	low=0;
	high= size -1;
	mid=(low+high)/2;
	
	while (low<=high)
	{
		if(arr[mid]<item)
		low=mid+1;
		
	else if(arr[mid]== item)
	{
		printf("\n item found at index number =%d",mid);
		break;
	}
	else // search towards left
	high =mid-1;
	mid=(low+high)/2;	
	}
	if (low>high)
	printf("\n item not present in the array.");
	
	return 0;
}
