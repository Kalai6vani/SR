/* LARGEST OF TENTH DIGIT AND UNIT DIGIT:

Given an integer N as input, the program must print the largest of the tenth digit and the unit
digit in the integer N.

EXAMPLE INPUT/OUTPUT 1:
Input:
5442 
Output:
4

EXAMPLE INPUT/OUTPUT 2:
Input:
4567 
Output:
7

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  if(N%10>N/10%10){
    printf("%d",N%10);
  }else{
    printf("%d",N/10%10);
  }
}
