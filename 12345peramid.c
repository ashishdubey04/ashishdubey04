#include<stdio.h>
int main()
{ 
	do
	{
		int i,j,k,n,m=1;
		printf("enter number ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("%d ",m);
				m++;
			}
			printf("\n");
		}
	}while(1);
	return 0;
}
