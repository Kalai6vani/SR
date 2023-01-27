/* Z - PATTERN WITH NUMBERS:

The program must accept an integer N as the input. The program must print the desired pattern as 
shown in the Example Input/Output section.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
Output:
1 2 3 4 5
* * * 4
* * 3
* 2
1 2 3 4 5

EXAMPLE INPUT/OUTPUT 2:
Input:
8
Output:
1 2 3 4 5 6 7 8
* * * * * * 7
* * * * * 6
* * * * 5
* * * 4
* * 3
* 2
1 2 3 4 5 6 7 8

SOLUTION:*/
#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    printf("%d ",i);
  }printf("\n");
  int X=N-1;
  for(int i=0;i<N-2;i++){
    for(int j=0;j<X;j++){
      if(j==X-1){
        printf("%d ",X);
      }else{
        printf("* ");
      }X--;
      printf("\n");
    }for(int i=1;i<=N;i++){
      printf("%d ",i);
    }
  }
