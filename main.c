#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE*fp;
char ch;
fp=fopen("datafile","w");
if(fp==NULL)
{
	printf("\n can not creat file writing impossible ");
	getch();
	exit(0);
}
printf("\n emter some data in file & press $ at end ");
do{
	ch= getche();
	fopen(ch,fp);
}while(ch!='$');
printf("\n data seved successfully ");
fclose(fp);
	getch();
}
