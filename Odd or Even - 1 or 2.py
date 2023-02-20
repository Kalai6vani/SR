'''ODD OR EVEN - 1 OR 2:

The program must accept an integer N as the input. The program must replace all the even digits in
N by 1 and replace all the odd digits in N by 2. Then the program must print the modified value of 
N as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
465189
Output:
112212

EXAMPLE INPUT/OUTPUT 2:
Input:
212112
Output:
121221

SOLUTION:'''

N=int(input())
L=[int(x) for x in str(N)]
for i in range(0,len(L)):
  if(L[i]%2==0):
    L[i]=1
  else:
    L[i]=2
for i in range(0,len(L)):
  print(L[i],end='')
