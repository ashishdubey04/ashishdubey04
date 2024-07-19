////# include <stdio.h>
////int main( )
////{
////char c[ 2 ] = "A" ;
////printf ( "%c\n", c[ 0 ] ) ;
////printf ( "%s\n", c ) ;
////return 0 ;
////}
//
//# include <stdio.h>
//int main( )
//{
//char s[ ] = "Get organised! learn C!!" ;
//printf ( "%s\n", &s[ 2 ] ) ;
//printf ( "%s\n", s ) ;
//printf ( "%s\n", &s ) ;
//printf ( "%c\n", s[ 2 ] ) ;
//return 0 ;
//}
//
//
//# include <stdio.h>
//int main( )
//{
//char s[ ] = "No two viruses work similarly" ;
//int i = 0 ;
//while ( s[ i ] != 0 )
//{
//printf ( "%c %c\n", s[ i ], *( s + i ) ) ;
//printf ( "%c %c\n", i[ s ], *( i + s ) ) ;
//i++ ;
//}
//return 0 ;
//}
//
//
//# include <stdio.h>
//int main( )
//{
//char s[ ] = "Churchgate: no church no gate" ;
//char t[ 25 ] ;
//char *ss, *tt ;
//ss = s ;
//while ( *ss != '\0' )
// *tt++ = *ss++ ;
//printf ( "%s\n", t ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//int main( )
//{
//char str1[ ] = { ’H’, ’e’, ’l’, ’l’, ’o’, 0 } ;
//char str2[ ] = "Hello" ;
//printf ( "%s\n", str1 ) ;
//printf ( "%s\n", str2 ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//void main( )
//{
//printf ( 5 + "Good Morning " ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//int main( )
//{
//	printf ( "%c\n", "abcdefgh"[ 4 ] ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//int main( )
//{
//printf ( "%d %d %d\n", sizeof ( ’3’ ), sizeof ( "3" ), sizeof ( 3 ) ) ;
//return 0 ;
//}
//	
//
//
// # include <stdio.h>
//# include <string.h>
//int main( )
//{
//char *str1 = "United" ;
//char *str2 = "Front" ;
//char *str3 ;
//str3 = strcat ( str1, str2 ) ;
//printf ( "%s\n", str3 ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//int main( )
//{
//int arr[ ] = { ’A’, ’B’, ’C’, ’D’ } ;
//int i ;
//for ( i = 0 ; i <= 3 ; i++ )
// printf ( "%d", arr[ i ] ) ;
//printf ( "\n" ) ;
//return 0 ;
//}
//
//
// # include <stdio.h>
//int main( )
//{
//char arr[ 8 ] = "Rhombus" ;
//int i ;
//for ( i = 0 ; i <= 7 ; i++ )
// printf ( "%d", *arr ) ;
//arr++ ;
//return 0;
//}
//
//
//
//	


#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	while(getch()!='0'){
 string str,str1;
 char ch[100],k=0;
 cin>>str>>str1;
 for(int i=0;i<str.size();i++){
  for(int j=0;j<str1.size();j++){
 
     if(str[i]==str1[j]){
   // cout<<str[i]<<endl;
    ch[k]=str1[j];
    k++;
   }
   
   
  
  }
  
 }

  cout<<ch;
}

}
