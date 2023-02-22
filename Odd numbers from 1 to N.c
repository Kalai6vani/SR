/* ODD NUMBERS FROM 1 TO N:

Given a positive integer N, the program must print the odd integers from 1 to N (inclusive of 1
and N).

EXAMPLE INPUT/OUTPUT 1:
Input:
9
Output:
1 3 5 7 9

EXAMPLE INPUT/OUTPUT 2:
Input:
12
Output:
1 3 5 7 9 11

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i+=2){
    printf("%d ",i);
  }
}
