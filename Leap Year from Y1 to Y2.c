/* LEAP YEAR FROM Y1 TO Y2:

The program must accept two years Y1 and Y2 as the input. The program must print all the leap years
from Y1 to Y2 (inclusive of Y1 and Y2) as the output. If there is no leap year from Y1 to Y2 then
the program must print -1 as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
1996 2019
Output:
1996 2000 2004 2008 2012 2016

EXAMPLE INPUT/OUTPUT 2:
Input:
1897 1903
Output:
-1

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int Y1, Y2;
  scanf("%d %d",&Y1,&Y2);
  int c=0;
  for(int i=Y1;i<=Y2;i++){
    if((i%4==0&&i%100!=0)||i%400==0){
      printf("%d ",i);
      c++;
    }
  }if(c==0){
    printf("-1");
  }
}
