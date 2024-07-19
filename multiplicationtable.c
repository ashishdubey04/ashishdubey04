#include<stdio.h>
int main()
{
	do{
	int n;
	printf("\nenter number ");
	scanf("%d",&n);
	table(n,1);
	}while(1);
	return 0;
}
void table(int n,int i){
	if(i==0){
		return ;
	}
	else{
		if(i<=10){
		printf("%d\n",n*i);
		table(n,++i);}
	}
}

/*#include<stdio.h>
#include<conio.h>
int i=10,n,ans;
int multi(int i,int n);
void main()
{
	printf("\n enter the any number ");
	scanf("%d",&n);
	ans=multi(i,n);
	printf("%d\n",ans);
	getch();
}
int multi(int i,int n){
	if(i>0){
		ans=n*i;
		printf("%d\n",ans);
	return multi(i-1,n);	
	}
	else{
		printf(" ");
	}
}*/
