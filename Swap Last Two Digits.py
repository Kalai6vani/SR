''' SWAP LAST TWO DIGITS:

The program must accept two integers X and Y as the input. The program must swap the last two digits
of X with the last two digits of Y. Then the program must print their product as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
34 123
Output:
3082

EXAMPLE INPUT/OUTPUT 2:
Input:
5323 1295
Output:
6598085

SOLUTION:'''

X,Y=map(int(input().split()))
X=X%100
Y=Y%100
a=X//100
b=Y//100
print((a*100+Y)*(b*100+X))
