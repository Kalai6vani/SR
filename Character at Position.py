''' CHARACTER AT POSITION:

The program must accept N integers as the input. Each integer denotes the position of the alphabet
(starting from A). The program must print the string value formed by these integers as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
9
19 11 9 12 12 18 1 3 11
Output:
skillrack

EXAMPLE INPUT/OUTPUT 2:
Input:
6
20 15 25 15 20 1
Output:
toyota

SOLUTION:'''

N=int(input())
L=list(map(int,input().split()))
for i in L:
  print(chr(96+i),end='')
