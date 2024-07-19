#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*root=NULL;
void insert_at_beg(int x)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	if(root==NULL){
		p->next=NULL;
		root=p;
	}
	else{
		p->next=root;
		root=p;
	}
	printf("\n element inserted ");
}
void insert_at_end(int x)
{
	struct node*p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=x;
	if(root==NULL){
		p->nest=NULL;
		root=p;
	}
	else{
		temp=root;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=p;
		}
		printf("\n element inserted ");
}
float main()
{
	printf("hi");
	return 1.1;
}
