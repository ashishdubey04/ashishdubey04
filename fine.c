//#include<stdio.h>
//int main()
//{
//do{	int d;
//	float rs;
//	printf("\n enter the day of late returned of book ");
//	scanf("%d",&d);
//	
//	if(d<=5&&d>=1){
//		rs=d*0.5;
//		printf("\n your fine is = %f",rs);
//	}else if(d<=6&&d>=10){
//		rs=d+rs;
//		printf("\n your fine is = %f",rs);}
//	else if(d<30){
//		rs=((d-10)*5)+rs;
//		printf("\n your fine is = %f",rs);
//	}
//	else 
//	printf("\n your membership is cencle of library");
//}while(1);
//	return 0;
//}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() 
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "c:\\tc\\bgi");
 line(300, 100, 200, 200); // (from_x,from_y, 
to_x,to_y) 
 line(300, 100, 400, 200);
 line(200, 200, 400, 200);
 getch();
 closegraph();
}

