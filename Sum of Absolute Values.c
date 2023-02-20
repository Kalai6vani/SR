/* SUM OF ABSOLUTE VALUES:

The program must accept N integers as the input. The program must print the sum of absolute values
of all the integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
4
12 -54 89 -45
Output:
200

EXAMPLE INPUT/OUTPUT 2:
Input:
5
57 5 -214 68 -77
Output:
421

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]);
  }int s=0;
  for(int i=0;i<N;i++){
    s+=abs(arr[i]);
  }printf("%d",s);
}
