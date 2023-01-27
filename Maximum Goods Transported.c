/* MAXIMUM GOODS TRANSPORTED:

There are goods to be transported by trains through a series of N stations which are numbered 
from 1 to N. Each station has at most one incoming railroad and at most one outgoing railroad. 
There are T tracks and each track connecting two stations has a capacity limit to transport goods. 
The stations with no incoming railroad are the sources and the stations with no outgoing railroad
are the destinations. The program must print the maximum amount of goods that can be transported.

EXAMPLE INPUT/OUTPUT 1:
Input:
6 4
1 2 23
3 4 12
5 6 34
2 3 45
Output: 
46

EXAMPLE INPUT/OUTPUT 2:
Input:
9 6 
3 4 23
1 2 56
2 6 14
7 9 54
5 7 16
8 5 23
Output: 
53

SOLUTION:*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i[100]={0};
  int N,T;
  scanf("%d %d",&N,&T);
  int c[N+1][N+1],j[100]={0};
  for(int x=0;x<T;++x){
    int source, destination, current;
    scanf("%d %d %d",&source, &destination, &current);
    j[source]=destination;
    c[source][destination]=current;
    i[destination]=1;
  }int res=0;
  for(int x=1;x<=N;++x){
    if(!i[x]){
      int minimum=9999999;
      int index=x;
      while(j[index]!=0){
        if(c[index][j[index]]<minimum){
          minimum=c[index][j[index]];
        }index=j[index];
      }res+=minimum;
    }
  }printf("%d",res);
}
      
