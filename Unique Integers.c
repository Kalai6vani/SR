/*UNIQUE INTEGERS:

The program must accept N integers as the input. The program must print YES if all the integers are unique. Else the program must print NO as the output.

EXAMPLE INPUT/OUTPUT 1:
Inuput:
5
9 0 1 83 839
Output:
YES

EXAMPLE INPUT/OUTPUT 2:
Inuput:
4
8 7 10 8
Output:
NO

SOLUTION:*/
#include <stdio.h>
int main(){
  int N,y=0,n=0;
  scanf("%d",&N);
  int v,count[1001]={0};
  for(int c=1;c<=N;c++){
    scanf("%d",&v);
    if(++(count[v])>1){
      n++;
      break;
    }else{
      y++;
    }
  }if(n>0){
    printf("NO");
  }else{
    printf("YES");
  }return 0;
}
