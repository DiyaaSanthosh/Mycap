import java.util.Scanner;

class demo{
    public static void main(String[] args){
     char ch;
     System.out.println("a.Hi\tb.Hey \tc.Hello");
     System.out.println("enter your choice:");
     Scanner s = new Scanner(System.in);
     ch= s.next().charAt(0);
     switch(ch){
         case 'a':System.out.println("You said Hi");
                 break;
        case 'b':System.out.println("You said Hey");
                 break;
        case 'c':System.out.println("You said Hello");
                 break;
     }
   } 
}
