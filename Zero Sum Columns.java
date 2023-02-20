/* ZERO SUM COLUMNS:

The program must accept an NxN matrix as the input. The program must print yes if the sum of each 
column in the matrix is equal to 0. Else the program must print no as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
3
10 -1 7
-1 -8 1
-9 9 -8
Output:
yes

EXAMPLE INPUT/OUTPUT 2:
Input:
5
1 0 -3 -7 3
5 2 -7 -6 -4
8 -10 -6 -3 9
-10 -5 -9 3 -10
-4 12 25 13 2
Output:
no

SOLUTION:*/

import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner s=new Scanner(System.in);
    int N=s.nextInt();
    int arr[][]=new int[N][N];
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        arr[i][j]=s.nextInt();
      }
    }int s=0,f=-1;
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        s+=arr[j][i];
      }if(s==0){
        f=0;
      }else{
        f=1;
        break;
      }
    }System.out.println(f==0?"yes":"no);
                        }
                        }
