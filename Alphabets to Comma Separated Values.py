''' ALPHABETS TO COMMA SEPARATED VALUES:

The program must accept N integers separated by an alphabet as the input. The program must print
those N integers separated by a comma as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
4
12e56y877z1234
Output:
12,56,877,1234

EXAMPLE INPUT/OUTPUT 2:
Input:
5
1s2d3h4e4
Output:
1,2,3,4,4

SOLUTION:'''

N=int(input())
S=input().strip()
k=''
L=[]
for i in S:
  if i.isdigit():
    k+=i
  else:
    L.append(k)
    k=''
L.append(k)
for j,i in enumerate(L):
  print(i,end='')
  if j!=len(L)-1:
    print(",",end='')
