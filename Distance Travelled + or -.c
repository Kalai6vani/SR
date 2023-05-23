/* DISTANCE TRAVELLED + OR -:


The program must accept a string S representing the direction of movement as the input. The string S contains only the characters + and -. A boy moves 1 unit left 
side if the character in S is -. The boy moves 1 unit right side if the character in S is +. The program must print the distance between the starting position of 
the boy and the final position at the end of the string as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
-+++-
Output:
1

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
char S[1001]; 
  scanf("%s",S);
  int in=0;
for(int i=0;i<strlen(S);i++){
  if(S[i]=='+'){
    in+=1;
  }else{
    in-=1;
  }
}printf("%d", abs(in));
}
