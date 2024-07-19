#include<stdio.h>
int main()
{
	float a,b,c;
	char ch;
	printf("#### calculater by ashish bubey ####");
	do{
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		{
		printf("\n enter any two numbers ");
		scanf("%f%f",&a,&b);
		c=a+b;
		printf("\n sum=%f",c);
		break;
		}
		case '-':
		{
		printf("\n enter any two numbers ");
		scanf("%f%f",&a,&b);
		c=a-b;
		printf("\n sum=%f",c);
		break;
		}
		
		case '*':
		{
		printf("\n enter any two numbers ");
		scanf("%f%f",&a,&b);
		c=a*b;
		printf("\n sum=%f",c);
		break;
		}
		
		case '/':
		
		{
		printf("\n enter any two numbers ");
		scanf("%f%f",&a,&b);
		c=a/b;
		printf("\n sum=%f",c);
		break;
		}
	}
}while(1);
	return 0;
}
