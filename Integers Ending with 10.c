/*INTEGERS ENDING WITH 10:

The program must accept N integers as the input. The program must print only the integers which 
are ending with the value 10 as the output. If no integer ends with 10 then the program must 
print -1 as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
25 10 45 5410 27
Output:
10 5410

EXAMPLE INPUT/OUTPUT 2:
Input:
6
113 32 425 233 43 11
Output:
-1

SOLUTION:*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }int c=0;
  for(int i=0;i<N;i++){
    if(arr[i]%10==0 && arr[i]/10%10==1){
      printf("%d ",arr[i]);
      c++;
    }
  }if(c==0){
    printf("-1");
  }
}
