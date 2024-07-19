/*#include <stdio.h>
int main() {
	int i, j, position, swap;
   int arr[100];
   int n;
   printf("\n enter the number of element =");
   scanf("%d",&n);
   printf("\n enter the elements = \n");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&arr[i]);
   }
     for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,temp,j,loc,min;
	printf("\n enter total no of element ");
	scanf("%d",&n);
//	printf("\n enter %d element of array ");
	for(i=0;i<n;i++)
	{
		printf("\n enter %d element of array ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<min)
			{
				min=a[i];
				loc=j;
			}
		}
		if(i!=loc)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
	printf("\n using selection = \n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
		
