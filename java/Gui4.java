import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public MarvellousFrame(String title)
	{
	    Frame fobj = new Frame(title);
		fobj.setSize(500,500);
		fobj.setVisible(true);
		
		fobj.addwindowListener(new MarvellousListener());
	
	}

}
class MarvellousListener implements WindowListener
{
	public  windowDeactivated(WindowEvent) )System.exit(){}
}

class Gui4
{
	public static void main(String arg[])
	{
		
	    MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");
		
	}
}