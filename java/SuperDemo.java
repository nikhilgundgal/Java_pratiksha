
class Base
{
	public int A,B;
	public Base(int No1,int No2)
	{
		this.A = No1;
		this.B = No2;
	}
	public void fun()
	{
		system.out.println("Inside Base fun");
		system.out.println("value of A from fun method is :"+this.A);
		
	}
}

class Derived extends Base
{
	public int X,Y;
	public Derived(int i,int j,int k,int l)
	{
		super(k,l);   //1usecase it must be on first line of constructor
		this.X = i;
		this.Y = j;
	}
	public void gun()
	{
		System.out.println("value of A fromm gun method is :"+super.A);  //2usecase
		super.fun();  //3usecase
	}
}
class SuperDemo
{
	public static void main(String a[])
	{
		Derived dobj = new  Derived(11,20,25,36); 
		dobj.gun();
	}
}
