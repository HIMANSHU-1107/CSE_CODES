//factorial of a number
#include<stdio.h>
int main ()
{
	int n;
	printf("whose factorial you want to calculate ?");
	scanf("%d",&n);
	
	printf("\nfactorial of %d=%d",n,factorial(n));
	
	return 0;
}
 int factorial (int num)
 {
 	if (num >=1)
 	return num *factorial(num-1); //recurcive function call
 	else
 	return 1;
 }
