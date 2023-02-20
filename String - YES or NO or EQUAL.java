/* STRING - YES OR NO OR EQUAL:

The program must accept a string S(where S always contains y and n) as the input. The program must 
print the output based on the following conditions.
-If the count of y is greater than the count of n in the string S, print "YES".
-If the count of y is less than the count of n in the string S, print "NO".
-If the count of y is equal to the count of n in the string S, print "EQUAL".

EXAMPLE INPUT/OUTPUT 1:
Input:
nnnyyny
Output:
NO

EXAMPLE INPUT/OUTPUT 2:
Input:
ynynyn
Output:
EQUAL

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner s=new Scanner(System.in);
    String S=s.nextLine();
    int yc=0,nc=0;
    for(int i=0;i<S.length();i++){
      if(S.charAt(i)='y'){
        yc++;
      }else if(S.charAt(i)=='n'){
        nc++;
      }
    }System.out.print(yc>nc?"YES":yc<nc?"NO":"EQUAL");
  }
}
