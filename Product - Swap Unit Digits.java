/* PRODUCT - SWAP UNIT DIGITS:

The program must accept two integers X and Y as the input. The program must print the product of X
and Y after swapping their unit digits as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
984 51
Output:
52974

EXAMPLE INPUT/OUTPUT 2:
Input:
3988477 4875884
Output:
194457599172438

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String X[]=sc.nextLine().split(" ");
    char Y=X[0].charAt(X[0].length()-1);
    X[0]=X[0].substring(0,X[0].length()-1)+""+X[1].charAt(X[1].length()-1);
    X[1]=X[1].substring(0,X[1].length()-1)+""+Y;
    System.out.print(Long.parseLong(X[0])*Long.parseLong(X[1]));
  }
}
