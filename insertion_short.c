/*
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,temp,j;
	printf("\n enter total no of element ");
	scanf("%d",&n);
//	printf("\n enter %d element of array ");
	for(i=0;i<n;i++)
	{
		printf("\n enter %d element of array ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[i]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
//	printf("\n using insertion short final shorted array list=\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}*//**/
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[64];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
