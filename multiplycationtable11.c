#include<stdio.h>
int main()
{
	int i,n,ans;
	do{
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		ans=i*n;
		printf("%d\n",ans);
	}}while(1);
	return 0;
}
