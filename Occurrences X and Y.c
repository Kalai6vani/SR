/*OCCURRENCES X AND Y:

The program must accept N integers and two integers X, Y as the input. The program must print YES if the number of occurrences of X is greater than or equal to the number
of occurrences of Y. Else the program must print NO as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
8 8 3 8 3
8 3
Output:
YES


EXAMPLE INPUT/OUTPUT 1:
Input:
7
17 12 13 12 13 14 13
12 13
Output:
NO

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }int X,Y,xc=0,yc=0;
  scanf("%d %d",&X,&Y);
  for(int i=0;i<N;i++){
    if(arr[i]==X){
      xc++;
    }if(arr[i]==Y){
      yc++;
    }
  }if(xc>=yc){
    printf("YES");
  }else{
    printf("NO");
  }
}
