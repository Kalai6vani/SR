''' MIDDLE N CHARACTERS IN STRING:

Given a String S and an integer N as input, the program must print the N characters present in the
middle of the string. If the length of S is even and N is odd print the character from the second 
half of the string as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
hello
3
Output:
ell

EXAMPLE INPUT/OUTPUT 2:
Input:
whatsapp
5
Output:
atsap

SOLUTION:'''

S=input().strip()
N=int(input())
d=len(S)-N
if N:
  print(S[(d+1)//2:len(S)-(d//2)])
