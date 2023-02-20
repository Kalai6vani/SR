''' MISSING KEYS:

Some of the keys in a keyboard which supports only lowercase alphabets were not working. Mr. XYZ
presses all the keys in the keyboard one by one in random order. The program must accept a string S
representing the keys typed as the input. Then the program must print the keys which are not working
in alphabetical order as the output.

EXAMPLE INPUT/OUTPUT 1:
Input:
abcdefghijlmnopqrtuvwxyz
Output:
ks

EXAMPLE INPUT/OUTPUT 2:
Input:
zfrsydigxhlounpkewqj
Output:
abcmtv

SOLUTION:'''

S=input()
key='abcdefghijklmnopqrstuvwxyz'
working=set(S)
not_working=set(key)-working
print(''.join(sorted(not_working)))
