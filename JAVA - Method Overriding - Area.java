/* JAVA - METHOD OVERRIDING - AREA:

The main method class Hello.java is given below.

import java.util.Scanner;
public class Hello {
public static void main(String[] args) { 
Scanner scan = new Scanner(System.in); 
int side scan.nextInt(); 
Square square= new Square (side);
Square cube = new Cube(side); 
System.out.println(square.getArea());
System.out.println(cube.getArea());
}
}

Please fill in the missing lines of code for the classes Square.java and Cube.java so that the program prints the output as mentioned below. Area of square= a^2.
Area of cube = 6a^2.

EXAMPLE INPUT/OUTPUT:
Input:
5
Output:
25
150

SOLUTION:*/

//Square.java
import java.util.*;
public class Square{
  int a;
  Square(int n){
    a=n;
  }public int getArea(){
    return a*a;
  }
}

//Cube.java
public class Cube extends Square{
  Cube(int n){
    super(n);
  }public int getArea(){
    return 6*a*a;
  }
}
