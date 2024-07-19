#include<stdio.h>
#include<conio.h>

void main()
{
  float interest, p, r, n;
  printf("Enter value of P: ");
  scanf("%f",&p);

  printf("Enter value of R: ");
  scanf("%f",&r);

  printf("Enter value of N: ");
  scanf("%f",&n);

  interest=p*r*n/100 ;

  printf("Simple Interest : %f", interest);

  getch();
}

//5. Program to accept value of radius and print area of a circle.
//
//#include<stdio.h>
//#include<conio.h>
//
//void main()
//{
//  float area,radius;
//  clrscr();
//
//  printf("Enter Radius:");
//  scanf("%f",&radius);
//
//  area=3.14*radius*radius;
//
//  printf("Area : %6.2f",area);
//
//  getch();
//}
//6. Program to accept a number from user and print it’s square & cube.
//
//#include<stdio.h>
//#include<conio.h>
//
//void main()
//{
//  int n,sqre,cube;
//  clrscr();
//
//  printf("Enter Number: ");
//  scanf("%d",&n);
//
//  sqre=n*n;
//  cube=n*n*n;
//
//  printf("\nSquare: %d\nCube: %d",sqre,cube);
//
//  getch();
//}
//
//7. Program to accept two values of a & b and swap their values.
//
//#include<stdio.h>
//#include<conio.h>
//
//void main()
//{
//  int a,b,temp;
//  clrscr();
//
//  printf("Enter 1st number : ");
//  scanf("%d",&a);
//
//  printf("Enter 2nd number : ");
//  scanf("%d",&b);
//
//  printf("\nBefore Swapping...");
//  printf("A=%d, B=%d",a,b);
//
//  temp=a;
//  a=b;
//  b=temp;
//
//  printf("\nAfter Swapping...");
//  printf("\n A=%d, B=%d",a,b);
//
//  getch();
//}
//
//8. Program to accept two number and print largest among them.
//
//#include<stdio.h>
//#include<conio.h>
//
//void main()
//{
//  int a,b;
//
//  printf("Enter 1st number : ");
//  scanf("%d",&a);
//
//  printf("Enter 2nd number : ");
//  scanf("%d",&b);
//
//  if(a>b)
//    printf("Largest value is : %d",a);
//  else
//    printf("Largest value is : %d",b);
//
//  getch();
//}
