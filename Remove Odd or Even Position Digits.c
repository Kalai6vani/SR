/* REMOVE ODD OR EVEN POSITION DIGITS:

The program must accept an integer N as the input. The program must remove the digits of N in odd
positions if N is odd. Else the program must remove the digits in even positions of N. Finally, the
program must print the modified N as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
245872
Output:
257

EXAMPLE INPUT/OUTPUT 2:
Input:
1009
Output:
9

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  long N;
  scanf("%ld",&N);
  char S[100000+sizeof(char)];
  sprintf(S,"ld",N);
  long i;
  if(N%2==0){
    i=0;
  }else{
    i=1;
  }int f=0;
  for(;strlen(S);i+=2){
    if(S[i]=='0'&&f==0){
      continue;
    }else{
      printf("%c",S[i]);
      f=1;
    }
  }
}
