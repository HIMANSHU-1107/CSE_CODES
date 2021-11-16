//string conversion
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

 int x =23456;
 printf("integer value =%d",x);
 
 char arr[50];
 //1. itoa()
 itoa(x, arr, 2);  //base =2 (binary)
 printf("\nbinary value of x =%s",arr);
 
 itoa(x, arr, 16);  //base =16 (hexadecimal)
 printf("\nhexadecimal value of x =%s",arr);
 
itoa(x, arr, 10);  //base =10 (decimal)
 printf("\ndecimal value of x =%s",arr);
 	
  //2. atof()
  char brr[10]="7.54";
 float cgpa = atof(brr); //convert string ->float
 printf("\n\nyour cgpa =%f",cgpa);
  
  //3.atoi()
  int result = atoi(brr);// convert string -> int
  printf("\n\n your result = %d",result);
  
   //4.atol()
  char crr[]= "7296873111";
  long int phn = atol(crr);
  printf("\n \nyour phone number = %ld",phn);
  
  //5.atoll()
  char drr[] = "7296873111";
  long long no = atoll(drr);
  printf("/n/nyour complete no = %lld",no);
 
 
	return 0;
}
