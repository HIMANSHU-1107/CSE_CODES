#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int num[n];
	int sum=0 , avg =0,i;
	printf("\nEnter the array elements:\n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&num[1]);
		sum= sum+num[i]	;
	}
	printf("\n array created by you :\n");
	for(i=0; i<n;i++)
	{
		printf("%d",num[i]);
	}
	avg = sum/n;
	printf("\n sum of array ,sum=%d",sum);
	printf("\n average of array ,avg=%d",avg);
	
	return 0;
}
