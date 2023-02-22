/* LARGER OF TWO NUMBERS:

Given two numbers X and Y, the program must print the larger number. If both are equal print any
one of them.

EXAMPLE INPUT/OUTPUT 1:
Input:
100
50
Output:
100

EXAMPLE INPUT/OUTPUT 2:
Input:
25
25
Output:
25

EXAMPLE INPUT/OUTPUT 3:
Input:
455
50
Output:
455

SOLUTION:*/

#include<stdio.h>
int main(){
  int X,Y;
  scanf("%d\n%d",&X,&Y);
  if(X>Y){
    printf("%d",X);
  }else if(X==Y){
    printf("%d",X);
  }else{
    printf("%d",Y);
  }
}
