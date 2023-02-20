/* MULTIPLES OF X FROM 1 TO N:

The program must accept two integers N and X as the input. The program must print the multiples of
X from 1 to N in the order given below. 
The order must be the 1st multiple of X, the last multiple of X, the 2nd multiple of X, the last but
second multiple of X and so on.

EXAMPLE INPUT/OUTPUT 1:
Input:
50 10
Output:
10 50 20 40 30

EXAMPLE INPUT/OUTPUT 2:
Input:
30 3
Output:
3 30 6 27 9 24 12 21 15 18

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S[]sc.nextLine().split(" ");
    int e=Integer.parseInt(S[o])/Integer.parseInt(S[1]);
    int f=Integer.parseInt(S[1]);
    int l=Integer.parseInt(S[1])*e;
    for(int i=0;i<e;i++){
      if(i%2==0){
        System.out.print(f+" ");
        f+=Integer.parseInt(S[1]);
      }else{
        System.out.print(l+" ");
        l-=Integer.parseInt(S[1]);
      }
    }
  }
}
