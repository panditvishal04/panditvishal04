import java.util.Scanner;  
public class sum
{  
public static void main(String args[])  
{  
int x, y, sum;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter the first number ->->: ");  
x = sc.nextInt();  
System.out.print("Enter the second number: ");  
y = sc.nextInt();  
sum = sum(x,y);  
System.out.println("The sum of two numbers x and y is: " + sum);  
}  
//method that calculates the sum  
public static int sum(int c, int d)  
{  
int sum = c + d;  
return sum;  
}  
}  
