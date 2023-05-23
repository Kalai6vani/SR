/* DIAGONAL ELEMENTS - POINTER:

The program must accept an integer matrix of size NxN as the input. The program must print all the elements of the main diagonal in the matrix as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
3 
1 2 3
4 5 6
7 8 9
Output:
1 5 9

EXAMPLE  INPUT/OUTPUT 2:
Input:
4
44 69 40 67
65 12 16 44
98 60 44 23
81 62 19 46
Output:
44 12 44 46

SOLUTION:*/

#include <stdio.h>
#include <stdlib.h>
void printDiagonal(int N,int *matrix){
  For(int i=0;i<N;i++){ 
    printf("%d",matrix[i*N+i]);
  }
}
int main{
int N;
  scanf("%d",&N);
  int matrix[N][N];
for (int row=0;row < N; row++){
for(int col=0; col < N; col++){
scanf("%d", &matrix[row][col]};
      }
      }
printDiagonal(N, matrix);
      }
