

class A
{
  int  i;
  int j;
  A()
  {
	  i=1;
	  j=2;
  }
}

class Output
{
	public static void main(String args[])
	{
	A obj1 = new A();
	A obj2 = new A();
	System.out.println(obj1.equals(obj2));
	}
}
