/* COUNT OF SPECIAL CHARACTERS:

The program must accept a string S as the input. The program must print the count of special
characters in the string S as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
eur09!^rp!e*!1*
Output:
6

EXAMPLE INPUT/OUTPUT 2:
Input:
o$ra^nge*
Output:
3

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S[101];
  scanf("%s",S);
  int c=0;
  for(int i=0;i<strlen(S);i++){
    if(S[i]=='^'||S[i]=='|'||S[i]=='*'||S[i]=='$'||S[i]=='@'||S[i]=='#'){
      c++;
    }
  }printf("%d",c);
}
