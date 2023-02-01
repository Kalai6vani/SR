/* PREVIOUS K INTEGERS:

The program must accept two integers N and K as the input. The program must print the integers from N-K to N as the input.

EXAMPLE INPUT/OUTPUT 1:
Input:
10 3
Output:
7 8 9 10

EXAMPLE INPUT/OUTPUT 2:
Input:
3 5
Output:
-2 -1 0 1 2 3

SOLUTION:*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int N,K;
  scanf("%d %d",&N,&K);
  for(int i=N-K;i<=N;i++){
    printf("%d ",i);
  }
}
