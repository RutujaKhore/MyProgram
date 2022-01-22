#include<stdio.h>

int main()
{
  int i=0,x=0;
  
  printf("enter number:\n");
  scanf("%d,&i");
  
  if(i%2==0)
  {
	  printf("number is even:\n");
	  
  }
  else
  {
	  printf("number is odd:\n");
  }
 return 0;
}