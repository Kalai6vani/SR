/* SUM BETWEEN 5 AND 10:

The program must accept N integers as the input. The program must traverse the given integers and if
the integer 5 is encountered then the following integers must be added till the integer 10 occurs.
Finally, the program must print the total sum as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
9
2 5 3 2 10 3 10 5 4
Output:
9

EXAMPLE INPUT/OUTPUT 2:
Input:
9
1 5 5 12 10 5 6 10
Output:
23

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int N=sc.nextInt();
    int arr[]=new int[N];
    for(int i=0;i<N;i++){
      arr[i]=sc.nextInt();
    }int f=0,c=0;
    for(int i=0;i<N;i++){
      if(f==1&&arr[i]!=10){
        c+=arr[i];
      }else if(arr[i]==5){
        f=1;
      }else if(arr[i]==10){
        f=0;
      }
    }System.out.print(c);
  }
}
