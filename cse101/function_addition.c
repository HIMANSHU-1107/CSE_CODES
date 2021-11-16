#include<stdio.h>
int main()
{
	int num1, num2;
	printf("enter num 1: ");
	scanf("%d",&num1);
	
	printf("enter num 2: ");
	scanf("%d",&num2);
	
	int result =addition (num1,num2);//function calling
	printf("\nsum of num1 and num2 =%d",result);
	return 0;
}
 //declareprototype and define function 
 int addition (int num1, int num2)
 {
 	int add =num1+num2;
 	return add;//use return with any function type e
 }
