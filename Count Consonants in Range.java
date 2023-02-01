/* COUNT CONSONANTS IN RANGE:

The program must accept two alphabets ch1 and ch2 as the input. The program must print the count of consonants between the given alphabets (including ch1 and ch2) as
the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
d j
Output:
5

EXAMPLE INPUT/OUTPUT 2:
Input:
s u
Output:
2

SOLUTION:*/
import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String ch1=sc.nextLine();
    char ch2=ch1.charAt(0);
    int c=0;
    String vowel="aeiou";
    for(;ch2<=ch1.charAt(2);ch2++){
      if(vowel.indexOf(ch2)<0){
        c++;
      }
    }System.out.print(c);
  }
}
