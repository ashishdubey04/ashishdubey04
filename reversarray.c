#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,temp,a[100];
	printf("\n enter total number of element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	j=n-1;
	while(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
}
for(i=0;i<n;i++)
{
	printf("%d,",a[i]);
}
getch();}
