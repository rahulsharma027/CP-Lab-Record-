#include<stdio.h>
#include<string.h>
long long int max=1e6 +5;
int main()
{
	char number[max];

	long long int len,i,count=0;
	printf("Enter a Number: ");
	scanf("%s",number);
	len=strlen(number);
	for(i=0;i<len/2;i++)
	{
		if(number[i]==number[len-i-1])
				count++;
	}
	if(count==len/2)
		printf("The entered number %s is a palindrome\n",number);
	else
		printf("The entered number %s is not a palindrome\n",number);
	return 0;
}
