/*NEXT PRIME NUMBER

An integer N is passed as the input to the program. The program must print the next prime number of N as the output. That is the smallest prime number which is greater 
than N.

INPUT FORMAT:
The first line contains the value of N.

OUTPUT FORMAT:
The first line contains the next prime number of N.

EXAMPLE INPUT/OUTPUT 1:
Input:
8
Output:
11

EXAMPLE INPUT/OUTPUT 2:
Input:
29
Output:
31

SOLUTION:*/
import java.util.*;
import java.math.*;
public class Hello{
public static void main(String[] args){
Scanner s=new Scanner(System.in);
long x=s.nextLong();
BigInteger N=new BigInteger(String.valueOf(x));
BigInteger f=N.nextProbablePrime();
System.out.print(f);
}
}
