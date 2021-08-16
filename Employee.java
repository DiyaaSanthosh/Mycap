public class Employee {
    String name,address,sal;
    int year;
    Employee(String n,int y,String s,String a)
    {
        name=n;
        year=y;
        sal=s;
        address=a;
    }
    public static void main(String[] args)
    {
        Employee e1=new Employee("Robert",1994,"64C","Walls street");
        Employee e2=new Employee("Sam",2000,"64D","Walls street");
        Employee e3=new Employee("John",1999,"26B","Walls street");
        System.out.println("Name   year of joining      Address     Salary");
        System.out.println("--------------------------------------------");
        System.out.println( e1.name+"    " + e1.year+"      "+  e1.address+"    "+e1.sal);
        System.out.println( e2.name+"    " + e2.year+"      "+  e2.address+"    "+e2.sal);
        System.out.println( e3.name+"    " + e3.year+"      "+  e3.address+"    "+e3.sal);
    }
}
