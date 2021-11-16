//checking the number for even and odd using fuctions
#include<stdio.h>
int main()
{
	int num,result=0;
	printf("enter the number:");
	scanf("%d",&num);
	
	result=even_odd(num);//fuction calling 
	if (result==0)
	printf("\n%d is odd ",num);
	else 
	printf("\n%d is even",num);
	
	return 0;
}
int even_odd(int x)//fuction declaration /prototype
{
	if(x%2 ==0)
	return 1;
	else 
	return 0;
}
