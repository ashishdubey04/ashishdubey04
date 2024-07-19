#include<stdio.h>
#include<string.h>
int main ()
{
	char name[ ] = { 'H', 'A', 'E', 'S', 'L', 'E', 'R', '\0' } ;
	char name[ ] = "HAESLER" ;/*Note that, in this declaration ’\0’ is not necessary. C inserts the null
character automatically.*/	
	return 0;
}

/* Program to demonstrate printing of a string */
# include <stdio.h>
int main( )
{
char name[ ] = "Klinsman" ;
int i = 0 ;
while ( i <= 7 )
{
printf ( "%c", name[ i ] ) ;
i++ ;
}
printf ( "\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
char name[ ] = "Klinsman" ;
int i = 0 ;
while ( name[ i ] != '\0' )
{
printf ( "%c", name[ i ] ) ;
//name[ i ]
//*( name + i )
//*( i + name )
//i[ name ]
i++ ;
}
printf ( "\n" ) ;
return 0 ;
}


# include <stdio.h>
int main( )
{
char name[ ] = "Klinsman" ;
char *ptr ;
ptr = name ; /* store base address of string */
while ( *ptr != '\0' )
{
printf ( "%c", *ptr ) ;
ptr++ ;
}
printf ( "\n" ) ;
return 0 ;
}

# include <stdio.h>
int main( )
{
char name[ ] = "Klinsman" ;
printf ( "%s", name ) ;
}
//The %s used in printf( ) is a format specification for printing out a string. 

# include <stdio.h>
int main( )
{
char name[ 25 ] ;
printf ( "Enter your full name: " ) ;
gets ( name ) ;//scanf ( "%[ ^\n ]s", name ) ;

puts ( "Hello!" ) ;
puts ( name ) ;
return 0 ;
}


//#include<stdio.h>
//#include<string.h>
//int main ()
//{
//	int n;
//	char str[10];
//	scanf("%d",&n);
//
//	gets(str);
//	printf("%d\n",2*n);
//	puts(str);
//	return 0;
//}
