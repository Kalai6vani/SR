/* TRIANGLE PATTERN - HYPHEN AND ASTERISK:

The program must accept an integer as the input. The program must print the desired pattern as 
shown in the Example input/Output section.

EXAMPLE INPUT/OUTPUT 1:
Input:
4
Output:
---**---
--****--
-******-
********

EXAMPLE INPUT/OUTPUT 2:
Input:
7
Output:
------**------
-----****-----
----******----
---********---
--**********--
-************-
**************

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
int N;
scanf("%d",&N);
int e=N+N,p=N,n=N+1;
  for(int i=1;i<=N;i++){
for (int j=1;j<=e;j++){
if(j>=p&&j<=n){
printf("*");
}else{
printf("-");
}
}printf("\n");
    p--;
    n++;
  }
}
