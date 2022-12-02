import java.io.*;

class BufferedInput
{
	public static void main(String A[])
	{
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferReader bobj = new BufferReader(iobj);
		String name = null;
		int Age = 0
		float marks = 0.0;
		try
		{
		System.out.println("Enter your name :");
		String name = bobj.readline();
		
		System.out.println("Enter your Age");
		int Age = Integer.parseInt(bobj.readline());
		
		System.out.println("Enter your Age");
		float marks = float.parsefloat(bobj.readline());
		
		catch(IOException obj)
		{}
		
		System.out.println("Name :"+name);
		System.out.println("Age :"+Age);
		System.out.println("marks :"+marks);
		}
		
		
	}
}