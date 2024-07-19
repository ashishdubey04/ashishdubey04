//// sum of digites of ny number 
//#include<stdio.h>
//int main()
//{
//	do{
//	int n,sum=0,rem;
//	printf("\n enter the number = ");
//	scanf("%d",&n);
//	while(n!=0){
//		rem=n%10;
//		n=n/10;
//	 sum=sum +rem;	
//	}
//	printf("\n the sum of number is = %d\n",sum);
//}while(1);
//	return 0;
//}
//
//
////revers any number
//#include<stdio.h>
//int main()
//{
//	do{
//	int n,sum=0,rem;
//	printf("\n enter the number = ");
//	scanf("%d",&n);
//	while(n!=0){
//		rem=n%10;
//		n=n/10;
//	 sum=sum*10+rem;	
//	}
//	printf("\n the revers number is = %d\n",sum);
//}while(1);
//	return 0;
//}
//
////last and first digit sum of any number
//#include<stdio.h>
//int main()
//{
//	do
//	{
//	int n,sum,rem;
//	printf("\n enter the number = ");
//	scanf("%d",&n);
//			sum=n%10;
//		while(n!=0)
//		{
//			rem=n%10;
//			n=n/10;
//		 	rem;	
//		}
//		sum=sum+rem;
//		printf("\n the sum of last and first number =%d\n ",sum);	
//	}while(1);
//	return ;
//}
//
////+1 of any numbers of digits
//#include<stdio.h>
//int main()
//{
//	do{
//	int n,sum=0,rem,num=0,a;
//	printf("\n enter the number = ");
//	scanf("%d",&n);
//	while(n!=0){
//		rem=n%10;
//		n=n/10;
//	 sum=sum*10 +rem;	
//	}
//	while(sum!=0)
//	{
//	   a=sum%10;
//	   sum=sum/10;
//	   num=num*10+(a+1);	
//	}
//	printf("\n the +1 sum of number is = %d\n",num);
//}while(1);
//	return 0;
//}
//
//
////minimum numbers notes of any given number 
//#include<stdio.h>
//int main()
//{
//	do
//	{
//	  int n,n1,n2,n5,n10,n50,n100;
//	  printf("\n enter the number = ");
//	  scanf("%d",&n);
//	  n100=n/100;
//	  n=n%100;
//	  printf("\n notes of Rs100 = %d ",n100);
//	  n50=n/50;
//	  n=n%50;
//	  printf("\n notes of Rs50 = %d ",n50);
//	  n10=n/10;
//	  n=n%10;
//	  printf("\n notes of Rs10 = %d ",n10);	
//	  n5=n/5;
//	  n=n%5;
//	  printf("\n notes of Rs5 = %d ",n5);	
//	  n2=n/2;
//	  n=n%2;
//	  printf("\n notes of Rs2 = %d ",n2);	
//	  n1=n/1;
//	  n=n%1;
//	  printf("\n notes of Rs1 = %d ",n1);		
//	}while(1);
//	return 0;
//}
////
//C is a programming language developed at AT & T’s Bell Laboratories of
//USA in 1972. It was designed and written by a man named Dennis
//Ritchie.In programming languages, constants are often called literals, whereas,
//variables are called identifiers.
/*Rules for Constructing Integer Constants
(a) An integer constant must have at least one digit.
(b) It must not have a decimal point.
(c) It can be either positive or negative.
(d) If no sign precedes an integer constant, it is assumed to be positive.
(e) No commas or blanks are allowed within an integer constant.
(f) The allowable range for integer constants is -2147483648 to
+2147483647.
Rules for Constructing Real Constants
Real constants are often called Floating Point constants. The real
constants could be written in two forms—Fractional form and
Exponential form.
Following rules must be observed while constructing real constants
expressed in fractional form:
(a) A real constant must have at least one digit.
(b) It must have a decimal point.
(c) It could be either positive or negative.
(d) Default sign is positive.
(e) No commas or blanks are allowed within a real constant.
The exponential form is usually used if the value of the constant is either
too small or too large. It, however, doesn’t restrict us in any way from
using exponential form for other real constants.
In exponential form the real constant is represented in two parts. The
part appearing before ‘e’ is called mantissa, whereas the part following
‘e’ is called exponent. Thus 0.000342 can be written in exponential form
as 3.42e-4 (which in normal arithmetic means 3.42 x 10-4
).
Following rules must be observed while constructing real constants
expressed in exponential form:
(a) The mantissa part and the exponential part should be separated by
a letter e or E.
(b) The mantissa part may have a positive or negative sign.
(c) Default sign of mantissa part is positive.
(d) The exponent must have at least one digit, which must be a positive
or negative integer. Default sign is positive.
(e) Range of real constants expressed in exponential form is
-3.4e38 to 3.4e38.
 4.1e8
-0.2E+3
 -3.2e-5 .


Rules for Constructing Character Constants
(a) A character constant is a single alphabet, a single digit or a single
special symbol enclosed within single inverted commas.
(b) Both the inverted commas should point to the left. For example, ’A’
is a valid character constant whereas ‘A’ is not.

Ex.: 'A'
 'I'
 '5'
 '='




Rules for Constructing Variable Names
(a) A variable name is any combination of 1 to 31 alphabets, digits or
underscores. Some compilers allow variable names whose length
could be up to 247 characters. Still, it would be safer to stick to the
rule of 31 characters. Do not create unnecessarily long variable
names as it adds to your typing effort.
(b) The first character in the variable name must be an alphabet or
underscore ( _ ).
(c) No commas or blanks are allowed within a variable name.
(d) No special symbol other than an underscore (as in gross_sal) can be
used in a variable name.
Ex.: si_int
 m_hra
 pop_e_89
 
 
C Keywords
Keywords are the words whose meaning has already been explained to
the C compiler (or in a broad sense to the computer). There are only 32
keywords available in C. Figure 1.5 gives a list of these keywords for your
ready reference. A detailed discussion of each of these keywords would
be taken up in later chapters wherever their use is relevant.
auto double int struct
 break else long switch 
 case enum register typedef
 char extern return union 
 const float short unsigned 
 continue for signed void
  default goto sizeof volatile
 do if static while 
 
 Note that compiler vendors (like Microsoft, Borland, etc.) provide their
own keywords apart from the ones mentioned in Figure 1.5. These
include extended keywords like near, far, asm, etc. Though it has been
suggested by the ANSI committee that every such compiler-specific
keyword should be preceded by two underscores (as in __asm ), not
every vendor follows this rule.
 
*/
#include <stdio.h>

int main()
{
	int a;
	getch();
	a=getch();
   while(a){
   	  printf("Current File :%s\n", __FILE__);
     printf("Current Date :%s\n", __DATE__);
     printf("Current Time :%s\n", __TIME__);
     printf("Line Number :%d\n", __LINE__);
   
    printf("My mobile number is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a\n");
   printf("Hello Geeks\b\b\b\bF\n");
   
   }
    return 0;
}


 # include <stdio.h>
void cmain( )
{
printf ( 5 + "Good Morning " ) ;	printf ( "%c\n", "abcdefgh"[ 4 ] ) ;
getch() ;
}












