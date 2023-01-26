/* SECOND DISTINCT INTEGER:

The program must accept N integers as the input. The program must print the second distinct integer in the given order among the N integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
12 12 12 13 14
Output:
13

EXAMPLE INPUT/OUTPUT 2:
Input:
7
45 45 45 45 78 78 89
Output:
78

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
    if(arr[i]!=arr[i+1]){
      printf("%d",arr[i+1]);
      break;
    }
  }
}
