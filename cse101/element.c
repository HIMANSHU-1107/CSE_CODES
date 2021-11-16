#include<stdio.h>
int main ()
{
	int cgpa[]={6,8,5,7},
	//float cgpa[]={6.9,8.5,5.3,7.0};//0,1,2,3
	printf("CGPA of 2nd & 4th student is:");
	show_cgpa(cgpa[1],cgpa[3]);
	return 0; //function call
}
void show_cgpa(int stu2, int stu4) //fun declaration
{
	printf("%d",stu2);
	printf("%d",stu4);
	
}
