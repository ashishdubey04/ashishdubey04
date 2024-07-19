#include<stdio.h>
int main()
{
	int y;
	printf("\n enter the year = ");
	scanf("%d",&y);
	if(y%4==0 && y%100==0 && y%400==0){
		printf("\n this is leap year ");
	}
	if(y%4==0 && y%100!=0 ){
		printf("\n this is leap year ");	
	}
	else{
			printf("\n this is not leap year ");
	}
	return 0;
}
