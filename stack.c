#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],x,ch;
int top=-1;
void push(int x){
	if(top==MAX-1){
		printf("\n stack is full insertion impossible ");
	}
	else{
		top++;
		a[top]=x;
		printf("\n element inserted ");
	}
}
void pop(){
	if(top==-1){
		printf("\n stack is empty deletion is not  possible ");
	}
	else{
		printf("\n deleted element=%d",a[top]);
		top--;
	}
}
void trevers(){
	int i;
	if(top==-1){
		printf("\n stack is empty ");
	}
	else{
		printf("\n element of stack is = ");
		for(i=0;i<=top;i++){
			printf("\n%d",a[i]);
		}
	}
}
void main(){
		printf("\n enter 1 for incerstion");
		printf("\n enter 2 for deletion");
		printf("\n enter 3 for treverser");
		printf("\n enter 4 for exit");
	do{	printf("\n enter your chouice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			{
				printf("\n enter any element ");
				scanf("%d",&x);
				push(x);
				break;
			}
				case 2 :{
					pop();
					break;
				}
			
			case 3 :{
				trevers();
				break;
			}
			case 4 :{
				exit (0);
				break;
			}
			default :{
				printf("\n enter correct choice ");
				break;
			}
			}}while(1);
			getch();

	}
	/*#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}*/
