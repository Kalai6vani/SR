/*GREATER THAN PREVIOUS:

N integers are passed as the input to the program. The program must print the integers which are
greater than the previous integer. The first integer will always be printed.

EXAMPLE INPUT/OUTPUT 1:
Input:
7
10 -90 66 0 22 0 -14
Output:
10 66 22

EXAMPLE INPUT/OUTPUT 2:
Input:
5
10 20 30 25 40
Output:
10 20 30 40

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }printf("%d ",arr[0]);
  for(int i=0;i<N;i++){
    if(arr[i]>arr[i-1]){
      printf("%d ",arr[i]);
    }
  }
}
