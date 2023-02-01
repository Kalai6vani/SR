/* PRINT THE NEXT OCCURRING CONSONANT:

The program must accept a character ch as the input. The program must print the next occurring consonant as the output. 

EXAMPLE INPUT/OUTPUT 1:
Input:
T
Output:
V

EXAMPLE INPUT/OUTPUT 2:
Input:
F
Output:
G

SOLUTION:*/
import java.util.*;
public class Hello{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    char ch=sc.next().charAt(0);
    int ptr=0;
    if(ch>='A' && ch<='Z'){
      ptr=0;
  }else{
      ptr=1;
      ch=Character.toUpperCase(ch);
}ch++;
    for(;;ch++){
      if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U){
         System.out.print(ptr==0?ch:Character.toLowerCase(ch));
         break;
         }else if(ch=='Z'){
           ch='A';
         }
         }
         }
         }
