#include<stdio.h>
int increase (int *num);

int main()
{
	int a=90;
	printf("\noriginal value of a=%d",a);
	
	printf("\n increase value of a =%d",increase (&a));
	return 0;
}
int increase (int *num)
{
	*num=*num+1;
	return *num;
}
	
