/* UPPERCASE AND LOWERCASE VOWELS - DIFFERENCE:

The program must accept a string S as the input. The program must print the absolute difference
between the count of uppercase vowels and the count of lowercase vowels in the string S as the 
output.

EXAMPLE INPUT/OUTPUT 1:
Input:
takEcare
Output:
2

EXAMPLE INPUT/OUTPUT 2:
Input:
cOmmUnicAtIOn
Output:
4

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S[100];
  scanf("%s",S);
  int uc=0,lc=0;
  for(int i=0;i<strlen(S);i++){
    if(S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U'){
      uc++;
    }else if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
      lc++;
    }printf("%d",abs(uc-lc));
  }
