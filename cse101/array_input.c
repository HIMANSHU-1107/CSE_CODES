#include<stdio.h>
int main()
{
	int arr[3];
	//1st way of array initialisation
    arr[0]=20;
    arr[1]=45;
    arr[2]=1;
    arr[3]=100;
    
    printf("Array contents are: %d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3]);
    
	//2nd aay of array initiallization
    int xyz[4]={1,45,90,34};
    int i;
    printf("\2nd array contents are:\n");
    for(i=0; i<4; i++)
    {
    	printf("%d ",xyz[i]);
	}
	return 0;
}
