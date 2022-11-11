'''
REVERSE MIDDLE WORDS IN S

The program must accept the value of a string S as the input. The program must reverse all the words in S except the first and the last word of the string. 
Then the program must print the modified string value as the output.

BOUNDARY CONDITION(S):
5<=Length of S<=999

EXAMPLE INPUT/OUTPUT 1:
Input:
Hi how are you
Output:
Hi woh era you

EXAMPLE INPUT/OUTPUT 2:
Input:
I am fine
Output:
I ma fine

SOLUTION:
'''
def reverse(S):
  L=[S for S in S.split(' ')]
  print(L[0],end=' ')
  for i in range(1,len(L)-1):
    print(L[i][::-1],end=' ')
  print(L[len(L)-1])
S=input()
reverse(S)
