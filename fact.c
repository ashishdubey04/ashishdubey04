/*#include<stdio.h>
int main (){
	int fact=1,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*n;
	printf("%d",fact);
	return 0;
}*/
#include<stdio.h>
#include<conio.h>
void main() 
{
do{
	int n,s;
	printf("enter the number for factorial ");
	scanf("%d",&n);
	printf("the fact is ");
	printf("%d\n",fact(n));
//	int fact=1,n,i;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	fact=fact*n;
//	printf("%d\a\n",fact);
}while(1);
	getch();
}


int fact(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}




