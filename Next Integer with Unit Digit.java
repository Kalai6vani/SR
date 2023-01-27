/* NEXT INTEGER WITH UNIT DIGIT:

The program must print accept an integer N as the input. The program must print the next integer of N which has the unit digit as 2 as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
2
Output:
12

EXAMPLE INPUT/OUTPUT 2:
Input:
145
Output:
152

SOLUTION:*/
import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int N=sc.nextInt();
    N+=1;
    int unit=N+10;
    for(;N<=unit;N++){
      String res=Integer.toString(N);
      if(res.charAt(res.length()-1)=='2'){
        System.out.print(res);
        break;
      }
    }
  }
}
