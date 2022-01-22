#include<iostream>
using namspace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Stack   //Singly linear linked list
{
	private:
	 PNODE first;
	 in size;
	 
	 Stack()
	 {
		 first = NULL;
		 size = 0;
	 }
	 void push(int no)//InsertFirst()
	 {
		 
	 }
	 int pop()//Deletefirst()
	 {
		 
	 }
	 void Display()
	 {
		 
	 }
	 int Count()
	 {
		 return size;
	 }
};

int main()
{
	Stack obj;
	
	obj.push(11);
	obj.push(21);
	obj.push(51);
	obj.push(101);
	
	int iret = obj.pop();
	cout<<iret;
	
	obj.Display();
	iret = obj.Count();
	
	cout<<"Size of stack is:"<<iret<<"\n";
}