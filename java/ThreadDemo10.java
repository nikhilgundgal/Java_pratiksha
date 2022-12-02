import java.util.*;

class Data
{
	public Arr[];
	public Data(int size)
	{
		Arr = new int[size];
		
	}
	protected void finalize()
	{
		Arr = null;
	}
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter numbers");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}	
	}
}


class Demo extends Thread
{
	public Data dobj;
	
	public DemoEven(Data obj)
	{
		dobj = obj;
	}
	
	public void run()
	{
		for(int i = 0; i < dobj.Arr.length; i++)
		{
			if(dobj.Arr[i] % 2 == 0)
			{
				System.out.println("Even number is :"+dobj.Arr[i]);
			}
		}	
	}
}


class ThreadDemo10
{
	public static void main(String a[]) throws InterruptedException
	{
		Data obj1 = new Data(10);
		obj1.Accept();
		
		DemoEven eobj = new DemoEven(obj1);
		DemoOdd eobj = new DemoOdd(oobj);
		
		Thread t1 = new Thread(eobj);
		Thread t1 = new Thread(oobj);
		
		t1.start();
		t2.start();
		
		t1.join();
		t2.join();
		
		
		
	}
}+9