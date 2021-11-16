//finonacci seriees ; without recursion 
#include<stdio.h>
int main ()
{
	int n1=0, n2=1, n3, limit,i;
	printf("enter the limit of finonacci series: ");
	scanf("%d",&limit);
	
	printf("Finonacci series of first %d numbers is : \n",limit);
	printf("%d %d ",n1,n2);
	
	for (i=2; i<limit; i ++)
	{
		n3 =n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
