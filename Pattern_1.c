#include <stdio.h>
int main()
{
	int i,j,k;//Declaration of variable
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
/** Program to print the following pattern:
				
				*
				**
				***
				****	
				*****
