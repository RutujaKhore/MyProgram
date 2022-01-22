#include<iostream>

using namespace std;

int main()
{
	int iNo1 = 0,iNo2 = 0,iRet = 0;
	
	cout<<"Enter 1st number\n";
	cin>>iNo1;		//scanf("%d",7iNo1);
	
	cout<<"Enter 2nd number\n";
	cin>>iNo2;		//scanf("%d",&iNo2);
	
	iRet = iNo1 + iNo2;
	
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}