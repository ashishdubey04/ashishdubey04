#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,min,a[100];
	printf("\n enter total number of element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min){
			min=a[i];
		}
	}printf("\n min element is =%d",min);
	getch();
}
