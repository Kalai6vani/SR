/*ODD AND EVEN POSITION CHARACTERS:
The program must accept a string S as the input. The program must print the characters which are present at the odd positions in the string S then print the characters
which are present at the even positions in the string S as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
Skillrack

Output:
Silak
klrc

EXAMPLE INPUT/OUTPUT 2:
Input:
action

Output:
ato
cin

SOLUTION:*/

#include <stdio.h>
#include <string.h>
int main(){
  char S[101],o[101],e[101];
  scanf("%s",S);
  int i=0,j=0,k=0;
  while(S[i]!='\0'){
    if(i%2==0){
      o[j++]=S[i];
    }else{
      e[k++]=S[i];
    }i++;
  }o[j]=e[k]='\0';
  printf("%s\n%s",o,e);
}

