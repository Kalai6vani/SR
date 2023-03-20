/* STRING PATTERN - ALPHABET POSITION:

The program must accept a string S as the input. The program must print the desired pattern.

EXAMPLE INPUT/OUTPUT 1:
Input:
abcdacg
Output:
a
bb
ccc
dddd
a
ccc
ggggggg

EXAMPLE INPUT/OUTPUT 2:
Input:
skillrack
Output:
ssssssssssssssssssss
kkkkkkkkkkk
iiiiiiiii
llllllllllll
rrrrrrrrrrrrrrrrrr
a
ccc
kkkkkkkkkkk

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S[1001];
  scanf("%s",S);
  char a[]="abcdefghijklmnopqrstuvwxyz";
  for(int i=0;i<strlen(S);i++){
    for(int j=0;j<strlen(a);j++){
      if(a[i]==S[i]){
        int x=0;
        while(x<=j){
          printf("%c",S[i]);
          x++;
        }printf("\n");
      }
    }
  }
}
