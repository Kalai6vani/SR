/*REMOVE EVERY 2ND INTEGER:

The program must accept an integer N as the input. The program must remove every 2nd integer and print the remaining integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
6
41 69 73 43 5 3
Output:
41 73 5

EXAMPLE INPUT/OUTPUT 2:
Input:
7
71 21 67 53 57 97 11
Output:
71 67 57 11

SOLUTION:*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }printf("%d ",arr[0]);
  for(int i=1;i<N;i++){
    if(i%2==0){
      printf("%d ",arr[i]);
    }
  }
}
    
