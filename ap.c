#include<stdio.h>
int main()
{
	do{
		int a,n,i;
		float d,ap;
		printf("\n enter first element and diffrence ");
		scanf("%d%f",&a,&d);
	    printf("\n enter the term where you find n ");
		scanf("%d",&n);
		for(i=0;i<=n-1;i++)
		{
		ap=a+i*d;
		printf("%f,",ap);	
		}	
	}while(1);
	return 0;
}
