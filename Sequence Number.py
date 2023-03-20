''' SEQUENCE NUMBER:

The program must accept a string S as the input. The program must print the sequence number for the
string S as the output. The sequence numbers are 1 (a), 2 (b), 3 (c), 4 (d), .... 26 (z), 27 (aa),
28 (ab), 29 (ac), ... and so on.

EXAMPLE INPUT/OUTPUT 1:
Input:
ac
Output:
29

EXAMPLE INPUT/OUTPUT 2:
Input:
all
Output:
1000

SOLUTION:'''

def fun(S):
  r=0
  for i in range(len(S)):
    r*=26
    r+=ord(S[i]-ord('a')+1
  return r
S=input()
print(fun(S))
