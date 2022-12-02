import java.sql.*;

class Database
{
	public static void main(String arg[])
	{
		String URL = "jdbc:mysql://locahost:3306/ppa41";
		String Username = "root";
		String Password = "root";
		
		Connection cobj = DriverManager.getConnection(URL,Username,Password);
		
		Statement sobj = cobj.CreateStatement();
		
		ResultSet = robj = sobj.executeQuery(Query);
		
		while(rs.next())
		{
			System.out.println("RID : "+robj.getInt("RID"));
			System.out.println("Name : "+robj.getInt("Name"));
			System.out.println("City : "+robj.getInt("City"));
			System.out.println("Marks : "+robj.getInt("Marks"));
			
		}	
		
	}
}