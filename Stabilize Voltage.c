/* STABILIZE VOLTAGE:

The program must accept two integers X representing the voltage supplied from a socket and Y
representing the voltage required by a television. The television can stabilize voltage variations
of plus or minus 50 units. The program must print yes if the television can work if plugged into
the socket. Else the program must print no as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
220 260
Output:
yes

EXAMPLE INPUT/OUTPUT 2:
Input:
150 205
Output:
no

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
  int X,Y;
  scanf("%d %d",&X, &Y);
  if(Y-X<=50){
    printf("yes");
  }else{
    printf("no");
  }
}
  
