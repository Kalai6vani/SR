/* SORT EVERY TWO INTEGERS:

The program must accept N integers (where N is always even) as the input. The program must sort 
every two integers in ascending order among the N integers. Then the program must print the modified
value of all the N integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
4
10 5 2 4
Output:
5 10 2 4

EXAMPLE INPUT/OUTPUT 2:
Input:
8
36 22 87 87 44 54 93 10
Output:
22 36 87 87 44 54 10 93

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
    if(i%2!=0){
      continue;
    }else{
      if(arr[i]>arr[i+1]){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
      }
    }
  }for(int i=0;i<N;i++){
    printf("%d ",arr[i]);
  }
}
