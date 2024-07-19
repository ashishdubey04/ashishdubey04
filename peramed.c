#include<stdio.h>
int main()
{
	do
	{
		char  ch='A';
		int i,n;
		printf("\n enter the value = ");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
		  printf("%c  ",ch);
		  ch++;
		}
		
		
	}while(1);
	return 0;
}
