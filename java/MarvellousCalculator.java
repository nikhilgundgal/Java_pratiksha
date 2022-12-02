import javax.swing.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{   
    public JFrame mainframe;
	public JButton b1, b2, b3, b4;
	public JTextField t1, t2;
	
	public Calculator(int width, int height, String Title)
	{
		mainframe = new JFrame(Title);
		mainframe.setSize(width,height);
		mainframe.setVisible(true);
		
		mainframe.addW 7     ,indowListener(this);
		
		b1 = new JButton("Add");
		b1 = new JButton("Sub");
		b1 = new JButton("Mult");
		b1 = new JButton("Div");
		
		b1.setBounds(1,280,80,40);    // x,y,w,h
		b1.setBounds(90,280,80,40);
		b1.setBounds(180,280,80,40);
		b1.setBounds(270,280,80,40);
		
		mainframe.add(b1);
		mainframe.add(b2);
		mainframe.add(b3);
		mainframe.add(b4);
		
		t1 = new JTextField();
		t2 = new JTextField();
		
		t1.setBounds(70,100,80,40);
		t2.setBounds(250,100,80,40);
		
		mainframe.add(t1);
		mainframe.add(t2);
		
		lobj = new JLabel();
		lobj.setBounds(150,25,200,100);
		
		mainframe.add(lobj);
        
        b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		
		mainframe.setLayout(null);
		mainframe.setVisible(true);
		
	} 
	
	public void windowClosing(WindowEvent obj)
	{
		System.exit(0);
	}
	public void actionPerformed(ActionEvent obj)
	{
		try
		{
			no1 = Integer.parseInt(t1.getText());
			no2 = Integer.parseInt(t2.getText());
			
			
			if(obj.getSource() == b1)
			{
				System.out.println("Addition is :"+no1+no2);
			}	
			else if(obj.getSource == b2)
			{
				System.out.println("Subtraction is :"+no1-no2);
			}	
			else if(obj.getSource == b3)
			{
				System.out.println("Multiplicaton is :"+no1*no2);
			}	
			else if(obj.getSource == b4)
			{
				System.out.println("Division is :"+no1/no2);
			}	
		}
		catch(Exception obj)
		{
			
		}
	}
}
class MarvellousCalculator
{
	public static void main(String arg[])
	{
		Calculator cobj = new Calculator(400,400,"MarvellousCalculator");
	}
}