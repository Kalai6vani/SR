/* GAME NAME BY CHARACTER:

The program must accept a character CH (Lowercase) as input and print as per the following 
conditions.
If CH is a, print Athletics,
If CH is b, print Basketball,
If CH is c, print Cricket,
If CH is d, print Discus throw,
If CH is g, print Golf,
If CH is h, print Hockey,
If CH is f, print Football,
If CH is t, print Tennis,
For any other value print Invalid.

EXAMPLE INPUT/OUTPUT 1:
Input:
h
Output:
Hockey

EXAMPLE INPUT/OUTPUT 2:
Input:
e
Output:
Invalid

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  char CH;
  scanf("%c",&CH);
  if(CH=='a'){
    printf("Athletics");
  }else if(CH=='b'){
    printf("Basketball");
  }else if(CH=='c'){
    printf("Cricket");
  }else if(CH=='d'){
    printf("Discus throw");
  }else if(CH=='g'){
    printf("Golf");
  }else if(CH=='h'){
    printf("Hockey");
  }else if(CH=='f'){
    printf("Football");
  }else if(CH=='t'){
    printf("Tennis");
  }else{
    printf("Invalid");
  }
}
