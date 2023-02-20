/* SWAP ALTERNATE INTEGERS:

The program must accept N integers as the input. The program must swap the first and third integer
then the program must swap fourth and sixth integer and so on. Finally, the program must print those
N integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
6
1 2 3 4 5 6
Output:
3 2 1 6 5 4

EXAMPLE INPUT/OUTPUT 2:
Input:
9
4 7 87 9 6 12 44 5 7
Output:
87 7 4 12 6 9 7 5 44

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int N=sc.nextInt();
    int arr[]=new int[N];
    for(int i=0;i<N;i++){
      arr[i]=sc.nextInt();
    }for(int i=2;i<N;i+=3){
      System.out.print(arr[i]+" "+arr[i-1]+" "+arr[i-2]+" ");
    }
  }
}
