#include<iostream>

using namespace std;

class Marvellous
{
	public:
	int Addition(int x,int y)
	{
		int iAns = 0;
		iAns = x + y;
		return iAns;
	}
};

int main()
{
	int iNo1 = 0,iNo2 = 0,iRet = 0;
	Marvellous mobj;	//Marvellous mobj = new Marvellous();
	
	cout<<"Enter 1st number\n";
	cin>>iNo1;		//scanf("%d",7iNo1);
	
	cout<<"Enter 2nd number\n";
	cin>>iNo2;		//scanf("%d",&iNo2);
	
	iRet = mobj.Addition(iNo1,iNo2);
	
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}