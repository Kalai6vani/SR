/* CORNER ELEMENTS:

The program must accept an integer matrix of size RC as the input. The program must print the corner elements (top left, top right, bottom left and bottom right) 
of the matrix as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
3 4
10 20 30 40
89 88 87 86
90 70 80 60
Output:
10 40 90 60

EXAMPLE INPUT/OUTPUT 2:
Input:
3 2 
1 9
6 7
4 2
Output:
1 9 4 2

SOLUTION:*/

#include<stdio.h> 
#include<stdlib.h>
int main() {
int R,C;
scanf("%d %d", &R, &C); 
int arr[R][C];
for(int 10;1<R;i++){ 
  for (int j=0;j;j++){ 
    scanf("%d",arr[i][j]); 
  }
}printf("%d %d %d %d", arr[0][0], arr[0][C-1], arr[R-1][0], arr[R-1][C-1]);
}
