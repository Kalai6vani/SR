/* COUNTER FROM STRING:

The program must accept a string S as the input. The program must maintain a counter which starts
from 0 based on the characters in the string. The program must traverse the string and manipulate
the counter based on the following conditions.

If the character is I (i.e. uppercase i) the program must increment the counter by 1.
If the character is D the program must decrement the counter by 1.
If the character is R the program must Reset the counter to 0.

Finally, the program must print the value of the counter.

EXAMPLE INPUT/OUTPUT 1:
Input:
DRIDD
Output:
-1

EXAMPLE INPUT/OUTPUT 2:
Input:
RDRIDRDIII
Output:
2

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S=sc.nextLine();
    int c=0;
    for(int i=0;i<S.length();i++){
      switch(S.charAt(i)){
        case 'D':
          c--;
          break;
        case 'R':
          c=0;
          break;
        case 'I':
          c++;
          break;
      }
    }System.out.print(c);
  }
}
