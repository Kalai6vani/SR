/* REMOVE TENTH DIGIT:

A number N is passed as the input. The program must remove tenth digit (if present) and print 
the resulting value.

EXAMPLE INPUT/OUTPUT 1:
Input:
569
Output:
59

EXAMPLE INPUT/OUTPUT 2:
Input
3
Output:
3

SOLUTION:*/

import java.util.*; 
public class Hello (
public static void main(String[] args) { 
Scanner sc=new Scanner(System.in);
String N=sc.nextLine();
for(int i=0;i<N.length();i++){
if(!(i==N.length()-2)){ 
  System.out.print(N.charAt(i));
}
}
}
  }
