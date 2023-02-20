/* SWAP OR REMOVE DIGITS:

The program must accept an integer N as the input. The program must swap the last two digits of N if
N is an odd integer. Else the program must remove the last two digits. Finally, the program must 
print the modified N as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
1245
Output:
1254

EXAMPLE INPUT/OUTPUT 2:
Input:
63532
Output:
635

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S=sc.nextLine();
    String start=S.substring(0,S.length()-2);
    int N=Integer.parseInt(S.substring(S.length)-2,S.length()));
    if(N%2==0){
      System.out.print(start);
    }else{
      System.out.print(start+S.charAt(S.length()-1)+S.charAt(S.length()-2));
    }
  }
}
