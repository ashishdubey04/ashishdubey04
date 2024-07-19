#include<stdio.h>


int main()
{
	
	while(1){
	int n,i,j;
	printf("\n enter the value of n ");
	scanf("%d",&n);
	
    for(i=1;i<=n;i++)
	{
    	printf("%d,",fibo(i));
    }
   };
	return 0;
}




int fibo(int n)
{
	if(n==1)
	{
	return 0;
	}
	
	else
	{
		if(n==2)
		{
		return 1;
		}
		else
		{
	return fibo(n-1)+fibo(n-2);
		}
	}
}



