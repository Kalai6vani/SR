/* Xth CHARACTER - FIRST AND LAST:

The program must accept a string S and an integer X as the input. The program must print the Xth 
character from the first and then print the Xth character from the last in the string S as the 
output.

EXAMPLE INPUT/OUTPUT 1:
Input:
watermelon
3
Output:
tl

EXAMPLE INPUT/OUTPUT 2:
Input:
umbrella
6
Output:
lb

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S=sc.nextLine();
    int N=sc.nextInt();
    N--;
    System.out.print(S.charAt(N)+""+S.charAt(S.length()-N-1));
  }
}
