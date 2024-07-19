#include<stdio.h>
#include<conio.h>
int power(long,long);
int main()
{
	do{
	int i,x,y,a;
	printf("\n enter the value of x ");
	scanf("%ld",&x);
	printf("\n enter the value of y ");
	scanf("%ld",&y);
	a=power(y,x);
	printf("\n%ld",a);
}while(1);
	getch();
 } 
 power(long y,long x){
 	if(y==0){
 		return 1;
	 }
	 else{
 	return x*power(y-1,x);}
 }
