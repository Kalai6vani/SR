''' ALPHABET FOR DIGIT:

Given an integer N as input, the program must print the lower case alphabets (from a to i) in the
position of the digits (from 1 to 9) in the given integer.

EXAMPLE INPUT/OUTPUT 1:
Input:
456
Output:
def

EXAMPLE INPUT/OUTPUT 2:
Input:
987
Output:
ihg

SOLUTION:'''

def func(N):
  r=0
  while(N>0):
    s=N%10
    r=r*10+s
    N=N//10
  return r
N=int(input())
S="/abcdefghi"
N=func(N)
while N>0:
  print(S[N%10],end='')
  N=N//10
