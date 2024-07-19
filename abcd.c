#include<stdio.h>
int main()
{
do{
	int i,j,n;
	char ch;
	printf("\nenter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ch='0';
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
  }while(1);
	return 0;
}
