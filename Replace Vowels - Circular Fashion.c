/* REPLACE VOWELS - CIRCULAR FASHION:

The program must accept a string S as the input. The program must replace all the vowels in S by
the vowels a, e, i, o and u in a circular manner. Finally, the program must print the modified
string as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
kingkong
Output:
kangkeng

EXAMPLE INPUT/OUTPUT 1:
Input:
icecreamchocolate
Output:
acecriomchucaleti

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S[101];
  scanf("%s",S);
  char v[]="aeiou";
  int c=0;
  for(int i=0;i<strlen(S);i++){
    if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
      printf("%c",v[c]);
      c++;
    }else{
      printf("%c",S[i]);
    }if(c==5){
      c=0;
    }
  }
}
