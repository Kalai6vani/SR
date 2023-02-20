/* REVERSE BEFORE LAST VOWEL:

The program must accept a string S as the input. The program must reverse all the characters 
present before the last vowel and print the modified string as the output. 

EXAMPLE INPUT/OUTPUT 1:
Input:
ethernet
Output:
nrehteet

EXAMPLE INPUT/OUTPUT 2:
Input:
umbrella
Output:
llerbmua

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String S=sc.nextLine();
    String vowels="aeiou";
    int x=-1;
    for(int i=S.length()-1;i>=0;i--){
      if(vowels.indexOf(S.charAt(i))>=0){
        x=1;
        for(int j=i-1;j>=0;j--){
          System.out.print(S.charAt(j));
        }break;
      }
    }System.out.print(S.substring(x,S.length()));
  }
}
