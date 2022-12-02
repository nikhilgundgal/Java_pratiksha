



class Employee implements Cloneable
{
	public int Eid;
	public String Name;
	public int salary;
	
	public Employee(int No, String str, int value)
	{
		this Eid = No;
		this.Name = str;
		this.salary = value;
	}
	
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}
class CloneDemo
{
	
	public static void main(String A[])
	{
		try
		{
			Employee eobj1 = new Employee(101,"Rahul",11000);
			Employee eobj2 = (Employee)eobj1.clone();
			
			System.out.println("Name of first employee :"+eobj1.Name);
			System.out.println("Name of Second employee :"+eobj2.Name);
			
			System.out.println("Name of first employee :"+eobj1.salary);
			System.out.println("Name of Second employee :"+eobj2.salary);
			
			eobj1.Name = "Sagar";
			System.out.println("Name of first employee :"+eobj1.Name);
			System.out.println("Name of Second employee :"+eobj2.Name);
			
			
		}
	}
}