#include<iostream>
using namspace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Queue   //Singly linear linked list
{
	private:
	 PNODE first;
	 int size;
	 
	public:
	  Queue()
	 {
		 first = NULL;
		 size = 0;
	 }
	 void EnQueue(int no)//InsertFirst()
	 {
		 
	 }
	 int DeQueue()//Deletefirst()
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
	Queue obj;
	
	obj.Enqueue(11);
	obj.Enqueue(21);
	obj.Enqueue(51);
	obj.Enqueue(101);
	
	int iret = obj.pop();
	cout<<iret;
	
	obj.Display();
	iret = obj.Count();
	
	cout<<"Size of stack is:"<<iret<<"\n";
}