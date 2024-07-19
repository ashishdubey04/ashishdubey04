#include<stdio.h>
#include<conio.h>
int fect(int a){
	if(a==0||a==1){
		return 1;
	}
	else{
		return a*fect(a-1);
	}
}

int main(){
do{
		int n,i,j,k;
	
		printf("\n enter the number ");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
		j=fect(n);
		k=n/j;
		n++;	
		}
		printf("%d",k);
}while(1);
	return 0;
}
