
#include<stdio.h>
int main()
{
	float km,meter,feet,inch;
	printf("\n enter the distence between two cities ");
	scanf("%f",&km);
	meter=1000*km;
	feet=meter*3;
	inch=feet*2.5;
	printf("\n distence of two cities in meter = %f meter",meter);
	printf("\n distence of two cities in feet = %f feet",feet);
	printf("\n distence of two cities in inch = %f inch",inch);
	return 0;
}
