/* UNIQUE TWO INTEGERS:

The program must accept N integers as the input. The program must print yes as the output if every
two integers are unique. Else the program must print no as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
4
39 622 64 39
Output:
yes

EXAMPLE INPUT/OUTPUT 2:
Input:
6
15 65 23 14 45 45
Output:
no

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d ",&arr[i]);
  }int yc=0,nc=0;
  for(int i=0;i<N;i+=2){
    if(arr[i]!=arr[i+1]){
      yc++;
    }else{
      nc++;
    }
  }if(nc==0){
    printf("yes");
  }else{
    printf("no");
  }
}
