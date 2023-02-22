/* ARRAY ELEMENT ADJACENT SUM:

Given an array of length N, the program must print the sum of adjcent numbers of elements present
in the array.

EXAMPLE INPUT/OUTPUT 1:
Input:
5
1 1 1 1 1
Output:
1 2 2 2 1

EXAMPLE INPUT/OUTPUT 2:
Input:
10
7 9 3 7 9 1 10 2 9 7
Output:
9 10 16 12 8 19 3 19 9 9

EXAMPLE INPUT/OUTPUT 3:
Input:
2
1 2
Output:
2 1

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }printf("%d ",arr[0]);
    for(int i=1;i<N;i++){
    printf("%d ",arr[i-1]+arr[i+1]);
}
    return 0;
}
