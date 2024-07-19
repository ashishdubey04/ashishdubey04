#include <stdio.h>

// binarySearch_i function using recursion
int binarySearch_r(int arr[], int first, int last, int number)
{
if (last >= first)
{
		int mid = first + (last - first)/2;

		if (arr[mid] == number) 
		{
			return mid;
		}

		if (arr[mid] > number) 
		{
			return binarySearch_r(arr, first, mid-1, number);
		}

		return binarySearch_r(arr, mid+1, last, number);
}

return -1;
}


// binarySearch_i function using Iteration

int binarySearch_i(int arr[], int first, int last, int number)
{
  while (first <= last)
  {
    int mid = first + (last-first)/2;
  
    if (arr[mid] == number) 
        return mid;  
  
    if (arr[mid] < number) 
        first = mid + 1; 
  
    else 
         last = mid - 1; 
  }
  
  return -1; 
}
  



int main()
{
	int n;
	printf("enter the number for array size = ");
	scanf("%d",&n);
	
	int arr[n],i,number,result;
	
	printf("\nenter valuse in assending order in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nenter number for searching in array = ");
	scanf("%d",&number);

//	result = binarySearch_r(arr, 0, n-1, number);
	result = binarySearch_i(arr, 0, n-1, number);	
	if(result == -1)
	{
	 printf("Element is not present in array");
	}
	else
	{
		printf("Element is present at index %d", result);
	}
	return 0;
}



