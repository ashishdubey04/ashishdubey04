#include<stdio.h>
#include<conio.h>
int main(){
	int a[3][3],n,i,j,sum=0;
	printf("\n enter the value of n ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(i==j || i+j==n-1){
			sum=sum+a[i][j];}
		}	}
		printf("\n the sum of diagonal matrix=%d ",sum);
	
getch();
	return 0;
	}
