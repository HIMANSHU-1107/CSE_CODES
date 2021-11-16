#include <stdio.h>
#include<string.h>
int main ()
{
	char a[] = {"Himanshu"};
	char b[]={"LPU"};
	char c[]={"lpu"};
	char d[]={"Phagwara"};
	char e[]={"Phagwara Punjab"};
	printf("lenght of a =%d", strlen(a));// total no of character
	printf("\nsize of a = %d", sizeof(a));//total allocated size assigned to array
	  
	printf("\n comparison of b & c :\n");
	int result = strcmp (b,c);
	printf("result of comparison = %d",result); //compare array b and c 
	if (result == 0)
	printf("\n array b & c are equall ! ");
	else 
	printf("\n array b & c are different !");
	
	printf("\nSTRNCMP ()\n");
	int res = strncmp(d ,e ,4);
	printf("res = %d",res);
	if (res == 0)
	 printf("\n array d and e are equal");
	 else
	 printf("\n array d and e are different!");
	 
	 // string concatenated
	 strcat(b,d);
	 printf("\nconcatenated string =%s",b);
	 // string copy:strcpy()
	 printf("\n string b before copy =%s",b);
	 strcpy(b,a);
	 printf("\n string b after copy =%s",b);
	 // string copy:strncpy()
	 printf("\n string d before copy =%s",d);
	 strncpy(d ,e, 12);
	 printf("\n string d after copy =%s",d);
	 //string reverse:
	 printf("\n string c before reverse =%s",c);
	 printf("\n string c after reverse =%s",strrev(c));
	 
	 
	return 0;
}
