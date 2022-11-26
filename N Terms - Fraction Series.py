'''
N TERMS - FRACTION SERIES:

The program must accept an integer N as the input. The program must print the first N terms in the series as the output.
The order of series must be 1/4, 1/2, 3/4, 1, 5/4, 3/2, 7/4, 2, 9/4, 5/2 and so on.

EXAMPLE INPUT/OUTPUT 1:
Input:
6
Output:
1/4 1/2 3/4 1 5/4 3/2


EXAMPLE INPUT/OUTPUT 2:
Input:
9
Output:
1/4 1/2 3/4 1 5/4 3/2 7/4 2 9/4


SOLUTION:'''
def fractionSeries(N):
  numerator=[1,1,1,3]
  denominator=[0,4,2,4]
  for i in range(1,N+1,1):
    if(i%4==0):
      print(numerator[i%4]+int(i/4)-1,end=' ')
    else:
      print(numerator[i%4]+(int(i/4)*denominator[i%4]),end='')
      print("/",end='')
      print(denominator[i%4],end=' ')
N=int(input())
fractionSeries(N)
