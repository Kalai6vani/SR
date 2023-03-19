/* SQUARE EVEN AND CUBE ODD:

Given an array of integers of size N as input, the program must print the square of even elements
and the cube of odd elements.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
2 3 7 4 1
Output:
4 27 343 16 1

EXAMPLE INPUT/OUTPUT 2:
Input:
4
10 9 6 3
Output:
100 729 36 27

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
    if(arr[i]%2==0){
      arr[i]=arr[i]*arr[i];
    }else{
      arr[i]=arr[i]*arr[i]*arr[i];
    }
  }for(int i=0;i<N;i++){
    printf("%d ",arr[i]);
  }
}
