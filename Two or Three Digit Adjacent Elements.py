''' TWO OR THREE DIGIT ADJACENT ELEMENTS:

The program must accept N integers as the input. The program must print the integers having both the adjacent elements as two or three digit integers. If no such integer
matches the given condiition, then the program must print -1 as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
6
12 421 98 2 23 9348
Output:
12 421 2 9348

EXAMPLE INPUT/OUTPUT 2:
Input:
8
1 123 83 4 5 17 646 73
Output:
1 646 73

SOLUTION:'''

N=int(input())
L=list(map(str,input().strip())))
k=[]
if len(L[1])==2 or len(L[1])==3:
  k.append(L[0])
for i in range(1,N-1):
  if(len(L[i-1])==2 or len(L[i-1])==3) and (len(L[i+1])==2 or len(L[i+1]==3):
                                            k.append(L[i])
if len(L[N-2])==2 or len(L[N-2])==3:
                                            k.append(L[N-1])
if len(k)==0:
                                            print("-1")
else:
                                            print(*k)
