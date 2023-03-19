/* MISSING MULTIPLE OF X:

The program must accept two positive integers X and N. Then the program must accept N-1 values which
are multiples of X in sequence with just one multiple M missing in the sequence. The program must
then print the missing multiple M.

EXAMPLE INPUT/OUTPUT 1:
Input:
2 10
12 14 16 20 22 24 26 28 30
Output:
18

SOLUTION:*/

#include<stdio.h>
void main(){
  int X,N;
  scanf("%d %d",&X,&N);
  int arr[N-1];
  for(int i=0;i<N-1;i++){
    scanf("%d",&arr[i]);
  }int p=arr[0]+a,f=0;  
  for(int i=1;i<N-1;i++){
    if(p!=arr[i]){
      printf("%d",p);
      f=1;
      break;
    }p+=X;
  }if(f==0){
    printf("%d",p);
  }
}
