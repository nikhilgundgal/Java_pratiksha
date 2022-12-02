import java.util.*;   //Inbuilt package

import Marvellous.Arithmatic;  //user defined package
import Marvellous.PPA.Loop;


class DemoPackage
{
	public static void main(String arr[])
    {
 		Scanner sobj = new Scanner(System.in);
		
		System.out.println("ENter first number");
		int iNo1 = sobj.nextInt();
		
		System.out.println("ENter Second number");
		int iNo2 = sobj.nextInt();
		
		Arithmatic aobj = new Arithmatic(iNo1,iNo2);
		
		int iResult = aobj.Addition();
		System.out.println("Addition is :"+iResult);
		
		int iResult = aobj.Subtraction();
		System.out.println("Subtraction is :"+iResult);
		
		Loop lobj = new Loop();
		lobj.Display();
	}	
} 