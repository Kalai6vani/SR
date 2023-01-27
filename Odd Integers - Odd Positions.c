/*ODD INTEGERS - ODD POSITIONS:

The program must accept N integers as the input. The program must print the odd integers which are
present at the odd positions in the given N integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
6
10 13 15 12 31 33
Output:
15 31

EXAMPLE INPUT/OUTPUT 2:
Input:
3
21 20 27
Output:
21 27

SOLUTION:*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }for(int i=0;i<N;i++){
    if(i%2==0){
      if(arr[i]%2!=0){
        printf("%d ",arr[i]);
      }
    }
  }
}
