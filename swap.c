#include<stdio.h>
int main(){
	int c,d,interchang;
	printf("\n enter the location of variable ");
	scanf("%d%d",&c,&d);
	interchang=c;
	c=d;
	d=interchang;
	
	printf("\n the interchang location of  numbers is = %d,%d",c,d);
	return 0;
}
