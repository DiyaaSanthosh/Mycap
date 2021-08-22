import java.util.Scanner;
public class Fibannoci{
    public static void main(String[] args)
    {
        int num;
        System.out.println("Total numbers to display:");
        Scanner sc = new Scanner(System.in);
        num= sc.nextInt();
        int a=0,b=1;
        int sum=0;
        System.out.print(a+" "+b);
        for(int i=1;i<=num-2;i++)
        {
           sum=a+b;
           System.out.print(" "+sum);
           a=b;
           b=sum;

        }
    }
}
