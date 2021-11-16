#include<stdio.h>
void swapping (int *a,int *b)//fuction declaration
{
int temp;
temp =*a;
*a =*b;
*b =temp;
}
int main ()
{
	int num1, num2;
	printf("enter the value of 2 numbers:");
	scanf("%d %d",&num1,&num2);
	
	printf("\n before swapping , num1 =%d and num2 =%d",num1,num2);
	swapping (&num1,&num2);//actual arguments
	printf("\n after swapping , num1 =%d and num2 =%d",num1,num2);
	return 0;
}
