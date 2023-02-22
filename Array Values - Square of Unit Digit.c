/* ARRAY VALUES - SQUARE OF UNIT DIGIT:

Given a set of N positive integers, the program must print the square of the unit digit of the N
integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
112 324 87 100 21
Output:
4 16 49 0 1

EXAMPLE INPUT/OUTPUT 2:
Input:
3
145 83 906
Output:
25 9 36

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]);
  }for(int i=0;i<N;i++){
    int u=arr[i]%10;
    printf("%d ",u*u);
  }
}
