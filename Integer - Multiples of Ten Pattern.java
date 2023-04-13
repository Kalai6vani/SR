/* INTEGER - MULTIPLES OF TEN PATTERN:

The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

EXAMPLE INPUT/OUTPUT 1:
Input: 
248
Output:
200 400 800
20 40 80
2 4 8

EXAMPLE INPUT/OUTPUT 2:
Input:
10578
Output:
10000 0 50000 70000 80000
1000 0 5000 7000 8000
100 0 500 700 800
10 50 70 80 
1 0 5 7 8

SOLUTION:*/
import java.util."; 
public class Hello (
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
long N=sc.nextLong();
String S=String.valueOf(N); 
int l=S.length()-1;
char arr[]=S.toCharArray();
while(l>=0){
  for (int i=0;i<arr.length;i++){ 
    int v=Character.getNumericValue(arr[i]); 
    System.out.print(v*((long)Math.pow(10,1))+" ");
  }System.out.println();
i--;
}
}
  }
