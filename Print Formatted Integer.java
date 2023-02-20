/* PRINT FORMATTED INTEGER:

The program must accept an integer N of exactly nine digits as the input. The program must print
the given integer in the format of (ddd) ddd ddd as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
142547878
Output:
(142) 547 878

EXAMPLE INPUT/OUTPUT 2:
Input:
154735914
Output:
(154) 735 914

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner s=new Scanner(System.in);
    String N=s.nextLine();
    System.out.print("("+N.substring(0,3)+") "+N.substring(3,6)+" "+N.substring(6,9));
  }
}
