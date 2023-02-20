/* REVERSE LAST X INTEGERS:

The program must accept N integers and an integer X as the input. The program must print the last X
integers (among N integers) in reverse order as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
7 4
20 84 64 19 63 26 99
Output:
99 26 63 19

EXAMPLE INPUT/OUTPUT 2:
Input:
10 10
1 2 3 4 5 6 7 8 9 10
Output:
10 9 8 7 6 5 4 3 2 1

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S1[]=sc.nextLine().split(" ");
    String S2[]=sc.nextLine().split(" ");
    int e=S2.length-Integer.parseInt(S1[1]);
    for(int i=S2.length-1;i>=e;i--){
      System.out.print(S2[i]+" ");
    }
  }
}
