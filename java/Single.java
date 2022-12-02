

class Base 
{
	public int A,B;
	public Base()
	{
		System.out.println("Base Cnstructor");
		
	}
	public void fun()
	{
		System.out.println("Inside Base fun");
		
	}
	public void gun()
	{
		System.out.println("Inside Base gun");
	}
	public void fun(int No)
	{
		System.out.println("Inside Base fun with one integer");
	}
}

class Derived extends Base
{
	public int X,Y;
	public Derived()
	{
		System.out.println("Derived constructor");
		this.X = 30;
		this.Y = 40;
	}
	public void sun()
	{
		System.out.println("Inside Derived sun");
	}
	public void gun()
	
	
}
class Single 
{
	public static void main(String arg[])
	{
		//Base bobj = new Base();
		//Derived dobj1 = new Derived();
		Base bobj2 = new Derived();
		//Derived dobj2 = new Base();
		
		
		dobj2.fun();   //Base fun
		dobj2.fun(11); //Base fun 
		dobj2.gun();
		dobj2.sun();
	}
}