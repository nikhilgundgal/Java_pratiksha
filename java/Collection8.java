import java.util.*;

class Collection8
{
	public static void main(String arg[])
	{
		Hashtable <String, Integer>hobj = new Hashtable<String, Integer>();
		
		hobj.put("PPA", 18000);
		hobj.put("LB", 17000);
		hobj.put("Python", 16500);
		hobj.put("LSP", 21000);
		
		Enumeration eobj = hobj.keys();
		
		while(eobj.hashMoreElements())
		{
			System.out.println("Value is"+eobj.nextElement());
		}	
		
		hobj.remove("LB");
		
		
	}
	
}	
		