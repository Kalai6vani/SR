/* STRING - MAXIMUM NUMBER OF VOWELS:

The program must accept two string values S1 and S2 containing only alphabets as the input. The
program must print the string which has a maximum number of vowels. If both S1 and S2 contain the
same number of vowels then the program must print S1 as the output. If both S1 and S2 contain only 
consonants then the program must print -1 as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
Day
Good
Output:
Good

EXAMPLE INPUT/OUTPUT 2:
Input:
hello
world
Output:
hello

EXAMPLE INPUT/OUTPUT 2:
Input:
fly
cry
Output:
-1

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char S1[101],S2[101];
  scanf("%s\n%s",S1,S2);
  S1=tolower(S1);
  S2=tolower(S2);
  int vc1=0,cc1=0,vc2=0,cc2=0;
  for(int i=0;i<strlen(S1);i++){
    if(S1[i]=='a'||S1[i]=='e'||S1[i]=='i'||S1[i]=='o'||S1=='u'){
      vc1++;
    }else{
      cc1++;
    }
  }for(int j=0;j<strlen(S2);j++){
   if(S2[i]=='a'||S2[i]=='e'||S2[i]=='i'||S2[i]=='o'||S2=='u'){
      vc2++;
    }else{
      cc2++;
    }
  }if(vc1>vc2){
    printf("%s",S1);
  }else if(vc2>vc1){
    printf("%s",S2);
  }else if(cc1==cc2){
    printf("-1");
  }else{
    printf("%s",S1);
  }
}
