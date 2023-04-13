/* ADDITION OR SUBTRACTION WITH X:

The program must accept N integers and an integer X as the input. The program must add X with the even integers among N integers and subtract X from the odd integers 
among N Integers. Finally, the program must print the modified values of N integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
12 23 34 55 56
3
Output:
15 20 37 52 59

EXAMPLE INPUT/OUTPUT 2:
Input:
7
1 2 3 4 5 6 7
Output:
-3 6 -1 8 1 10 3

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N,X;
  scanf("%d %d",&N,&X); 
  int arr[N]; 
  for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]); 
  }for(int i=0;i<N;i++){
    if(i%2==0){ 
      printf("%d ", arr[i]+X); 
    }else{
      printf("%d", arr[1]-X);
    }
  }
}
