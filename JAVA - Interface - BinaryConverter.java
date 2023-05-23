/*JAVA - INTERFACE - BINARYCONVERTER: 

The interface and class BinaryConverter.java and Hello.java are given respectively below. Please define the class DecimalToBinaryConverter.java that implements
the interface BinaryConverter by filling in the code so that the program can convert and print decimal number to binary number.

BinaryConverter.java

public interface BinaryConverter{
string toBinary(int number);
}

Hello.java

import java.util.*;
public class Hello{
public static void main(String[] args){
Scanner scan=new Scanner(System.in); 
DecimalToBinaryConverter myConverter= new DecimalToBinaryConverter();
int N= scan.nextInt(); 
System.out.println(myConverter.toBinary(N));
}
}

EXAMPLE INPUT/OUTPUT 1:
Input:
10
Output:
1010

SOLUTION:*/

import java.util.*;
public class DecimalToBinaryConverter{
  public String toBinary(int a){
    String e="";
    while(a!=0){
      int x=(a%10)%2;
String t=String.valueOf(x);
e+=t;
      a/=2;
    }
StringBuffer b=new StringBuffer(a);
b.reverse();
return b.toString();
  }
}
