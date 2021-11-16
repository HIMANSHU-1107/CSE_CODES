//storage class
#include<stdio.h>
int main()
{
	int a;
	auto char ch;
	float f;
	static int x=10 ,y=20;
	{
		static int z=200;
	}
	printf("---------AUTOMATIC STORAGE CLASS-------\n");
	printf("a=%d, ch=%c and f=%.2f",a,ch,f);
	
	printf("---------STATIC STORAGE CLASS-------\n")
	printf("x = %d, y =%d",x,y);
	printf("address of y=%d",&y);
			
	
	
	return 0;
	

}
