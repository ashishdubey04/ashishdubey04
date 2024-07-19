#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,a;
    printf("\n enter the value of circle points ");
    scanf("%f%f",&x,&y);
    printf("\n enter the redius of circle ");
    scanf("%f",&r);
    a=sqrt((x*x)+(y*y));
    if(r>a)
    printf("\n the point are outside of the circle ");
    else if(r<a)
    printf("\n  the point are inside of the circle ");
    else
    printf("\n enter correct points");
    return 0;
}