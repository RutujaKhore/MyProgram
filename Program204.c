#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void fun(PNODE p)
{
	
}

void gun(PPNODE q)
{
	
}

int main()
{
	PNODE first = NULL;
	
	//call by value
	fun(first);  //fun(100) Display(),count()
	
	//call by address
	gun(&first);  //gun(50) insertFirst(),InsertLast(),InsertAtPost(),deleteFirst(),deleteLast(),delete
	
	return 0;
}