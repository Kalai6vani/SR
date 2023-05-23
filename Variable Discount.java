/* VARIABLE DISCOUNT:

The program must accept an integer P which represents the price of an item in a supermarket as the input. The program must print the discount amount for P up to 
2 decimal places based on the following conditions,
-If the price is less than or equal to Rs. 1000 then 10 percentage discount is applied. 
-Else if the price is greater than Rs. 1000 then 10 percentage discount is applied up to Rs. 1000 and 5 percentage discount is applied for the remaining price 
amount.

EXAMPLE INPUT/OUTPUT 1:
Input:
852
Output:
85.20

EXAMPLE INPUT/OUTPUT 2:
Input:
1543
Output:
127.15

SOLUTION:*/
import java.util.*;
public class Hello {
public static void main(String[] args){
 Scanner sc=new Scanner(System.in);
long num=sc.nextLong(); 
  double res=0.0;
if(num<=1000){ 
  res=num*0.1;
System.out.format("%.2f",res);
}
  else{ 
    res=(1000*0.1)+(num-1000)*0.05;
    System.out.format("%.2f", res);
  }
}
