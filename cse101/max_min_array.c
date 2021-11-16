#include<stdio.h>
int main()
{
	int i,max,min,size;
	printf("enter the sizze of the array:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("\n enter thr aaray elements :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max= arr[0];
	min=arr[0];
	//logic for finding max & min
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		   max=arr[i];
		   
		if (arr[i]<min)
		    min= arr[i];
    }
    printf("\n maximum element =%d",max);
    printf("\n minimum element =%d",min);
	
	return 0;
}
