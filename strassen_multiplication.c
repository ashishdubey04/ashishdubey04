#include<stdio.h>
int main(){
	int n;
	printf("enter the power of matrices is = ");
	scanf("%d",&n);
	
  int a[n][n], b[n][n], c[n][n], i, j;
  int m1, m2, m3, m4 , m5, m6, m7;
 
  printf("\nEnter the elements of first matrix: \n\n");
  for(i = 0;i < n; i++)
      {
      	for(j = 0;j < n; j++)
      	  {
      	  	 printf("a[%d][%d] = ",i,j);
             scanf("%d", &a[i][j]);
		  }
	  }
	  
	  
  printf("\nEnter the elements of second matrix: \n\n");
  for(i = 0; i < n; i++)
     {
     	 for(j = 0;j < n; j++)
		{
		   printf("a[%d][%d] = ",i,j);
           scanf("%d", &b[i][j]);
		}
	 }
 
 
 
  printf("\n\nThe first matrix is\n");
  for(i = 0; i < n; i++){
      printf("\n");
      for(j = 0; j < n; j++)
          {
          	 printf("%d\t", a[i][j]);
		  }
  }
 
 
 
  printf("\n\nThe second matrix is\n");
  for(i = 0;i < n; i++){
      printf("\n");
      for(j = 0;j < n; j++)
          {
          	 printf("%d\t", b[i][j]);
		  }
  }
 
 
 
  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
  m2= (a[1][0] + a[1][1]) * b[0][0];
  m3= a[0][0] * (b[0][1] - b[1][1]);
  m4= a[1][1] * (b[1][0] - b[0][0]);
  m5= (a[0][0] + a[0][1]) * b[1][1];
  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 
 
 
  c[0][0] = m1 + m4- m5 + m7;
  c[0][1] = m3 + m5;
  c[1][0] = m2 + m4;
  c[1][1] = m1 - m2 + m3 + m6;
 
 
 
   printf("\n\nAfter multiplication using Strassen's algorithm \n");
   for(i = 0; i < n ; i++){
      printf("\n");
      for(j = 0;j < n; j++)
           {
           	printf("%d\t", c[i][j]);
		   }
   }
 
   return 0;
}



