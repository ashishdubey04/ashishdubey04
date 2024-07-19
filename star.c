#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n enter the no of lines ");
	scanf("%d",&n);
	if(n%2==1){
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1 || i==n||j==1||j==n||i%2==1&&j<=i||j%2==1&&i<=j){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
