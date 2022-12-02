



class Demo
{
	public int No1;
	public int No2;
	
	public Demo(int a, int b)
	{
		No1 = a;
		No2 = b;
	}
	class EqualDemo
	{
		public static void main(String A[])
		{
			String s1 = "Hello";
			String s2 = "Hello";
			
			System.out.println("Hashcode of s1 :"+s1.hashcode());
			System.out.println("Hashcode of s1 :"+s2.hashcode());
			
			
			if(s1.equals(s2))
			{
				System.out.println("Objectare same");
				
			}	
			else
			{
				System.out.println("Object are different")
			}
			if(s1 == s2)
			{
				System.out.println("object are same");
				
			}	
			else
			{
				System.out.println("Object are different");
			}	
		}
	}
}