import java.io.*;

class BufferedInput1
{
	public static void main(String A[]) throws IOException
	{
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		String name = null;
		int Age = 0
		float marks = 0.0;
		
		System.out.println("Enter your name :");
		String name = bobj.readline();
		
		System.out.println("Enter your Age");
		int Age = Integer.parseInt(bobj.readline());
		
		System.out.println("Enter your Age");
		float marks = float.parsefloat(bobj.readline());
	
		System.out.println("Name :"+name);
		System.out.println("Age :"+Age);
		System.out.println("marks :"+marks);
		}
		
		
	}
}