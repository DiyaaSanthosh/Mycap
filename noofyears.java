import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner s=new Scanner(System.in);
	    int mins;
	    System.out.println("Enter mins:");
	    mins = s.nextInt();
	    int years,days;
	    years=mins/(365*24*60);
	    mins=mins%(365*24*60);
	    days=mins/(24*60);
	    System.out.println(years +" years and " + days +" days");
		
	}
}
