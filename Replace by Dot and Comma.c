/* REPLACE BY DOT AND COMMA:

The program must accept a string S as the input. The program must replace all the special characters
by .(dot) and ,(comma) such that the next occurring special character of .(dot) must be a ,(comma)
and also the next occurring special character of , comma must .(dot). Finally, the program must 
print the modified string as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
yum.as;io/d'p
Output:
yum.as,io.d,p

EXAMPLE INPUT/OUTPUT 2:
Input:
\s.s/qw'sd?fe2'3r
Output:
.s,s.qw,sd.fe2,3r

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S[1000];
  scanf("%s,S);
  char ch='.';
  for(int i=0;i<strlen(S);i++){
    if(!isalpha(S[i] && !isdigit(S[i])){
      printf("%c",ch);
      if(ch=='.'){
        ch=',';
      }else{
        ch='.';
      }
    }else{
      printf("%c",S[i]);
    }
       }
       }
