import java.util.Scanner; 
public class problem
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.print("enter the marks of the student:");
    int a=sc.nextInt();
    if(a>90)
    {
        System.out.println("excellent");
    }
    else if(a>80 & a<=90)
    {
        System.out.println("good");
    }
    else if(a>70 & a<=80)
    {
        System.out.println("fair");
    }
    else if(a>60 & a<=70)
    {
        System.out.println("meets expectations");
    }
    else
    {
        System.out.println("below par");
    }
    }
  }