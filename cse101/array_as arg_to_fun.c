#include<stdio.h>
int main ()
{ 
int num []={56,90,78,1,99,20};
 printf("sum of array =%d", array_sum(num));
 return 0;
 
}

 int array_sum(int num [])// declare and define the function 
 {
 	int sum =0,i;
 	for(i=0;i<6;i++)
    {
    	sum =sum+num[i];
	}
	return sum;
 }
