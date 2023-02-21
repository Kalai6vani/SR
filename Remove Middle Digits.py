'''REMOVE MIDDLE DIGITS:

An integer N is passed as the input to the program. The program must remove the digits between the first and last digit of N. Then the program must print the modified
N as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
4785
Output:
45

EXAMPLE INPUT/OUTPUT 2:
Input:
543158
Output:
58

SOLUTION:'''

N=int(input())
L=[]
while N>0:
  d=N%10
  L.insert(0,d)
  N//=10
f=L[0]
l=L[-1]
print(f,l,sep='')
