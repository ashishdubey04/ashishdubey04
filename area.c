#include<stdio.h>
int main()
{
	float length ,breadth,radius,areac,perimeter,circumference,arear;
	printf("\n enter length & breadth of any rectangle = ");
	scanf("%f%f",&length,&breadth);
	arear=length*breadth;
	perimeter=2*(length+breadth);
	printf("\n area of rectengle =%f ",arear);
	printf("\n perimeter of rectengle =%f ",perimeter);
	printf("\n enter redius of any cricle = ");
	scanf("%f",&radius);
	areac=radius*radius*3.1416;
	circumference=2*radius*3.1416;
	printf("\n area of circle=%f ",areac);
	printf("\n circumference of circle=%f ",circumference);
	return 0;
}
