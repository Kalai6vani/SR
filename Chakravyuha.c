/* CHAKRAVYUHA:

During the battle of Mahabharat, when Arjuna was far away in the battlefield, Guru Drona made a 
Chakravyuha formation of the Kaurava army to capture Yudhisthir Maharaj. Abhimanyu, young son of
Arjuna was the only one amongst the remaining Pandava army who knew how to crack the Chakravyuha.
He took it upon himself to take the battle to the enemies.

Abhimanyu knew how to get power points when cracking the Chakravyuha. So great was his prowess that
rest of the Pandava army could not keep pace with his advances. Worried at the rest of the army 
falling behind, Yudhisthir Maharaj needs your help to track of Abhimanyu's advances. Write a program
that tracks how many power points Abhimanyu has collected and also uncover his trail.

A Chakravyuha is a wheel like formation.

A Chakravyuha has a very well-defined coordinate system. Each point on the coordinate system is 
manned by a certain unit of the army. The Commander-In-Chief is always located at the center of the
army to better coordinate his forces. The only way to crack the Chakravyuha is to defeat the units
in sequential fashion.

A Sequential order of units differs structurally based on the radius of the Chakra. The radius can
be thought of as length or breadth of the matrix. The structure i.e, placement of units in 
sequential order.

The entry point of the Chakravyuha is always at the (0,0) coordinate of the matrix. This is where
the 1st army unit guards. From (0,0) i.e, 1st unit Abhimanyu has to march towards the center at
(2,2) where the 25th i.e. the last of the enemy army unit guards. Remember that he has to proceed by
destroying the units in sequential fashion. After destroying the first unit, Abhimanyu gets a power
point. Thereafter, he gets one after destroying army units which are multiples of 11. You should
also be an in a position to tell Yudhisthir Maharaj the location at which Abhimanyu collected his
power points.

EXAMPLE INPUT/OUTPUT 1:
Input:
3
Output:
1 2 3
8 9 4
7 6 5
Total Power points: 1
(0,0)

EXAMPLE INPUT/OUTPUT 2:
Input:
8
Output:
1 2 3 4 5 6 7 8
28 29 30 31 32 33 34 9
27 48 49 50 51 52 35 10
26 47 60 61 62 53 36 11
25 46 59 64 63 54 37 12
24 45 58 57 56 55 38 13
23 44 43 42 41 40 39 14
22 21 20 19 18 17 16 15
Total Power points: 6
(0,0)
(3,7)
(7,0)
(1,5)
(6,1)
(5,5)

SOLUTION:*/

#include<stdio.h>
#include<stdlib.h>
int isDivby11(int);
int main(){
  int N;
  scanf("%d",&N);
  if(N<=0||N>100){
    return 0;
  }int arr[100][100],brr[20][20],ctr=1,i,j,x=1,w,s=N-1;
  int ns=(N*N)/11+1;
  for(w=0;w<N/2;w++){
    i=w;
    j=w;
    for(j=j;j<s+w;j++){
      arr[i][j]=ctr;
      ctr++;
      if(isDivby11(arr[i][j])){
        brr[x][0]=i;
        brr[x][1]=j;
        x++;
      }
    }for(i=i;i<s+w;i++){
      arr[i][j]=ctr;
      ctr++;
      if(isDivby11(arr[i][j])){
        brr[x][0]=i;
        brr[x][1]=j;
        x++;
      }
    }for(j=j>w;j--){
      arr[i][j]=ctr;
      ctr++;
      if(isDivby11(arr[i][j])){
        brr[x][0]=i;
        brr[x][1]=j;
        x++;
      }
    }for(i=i;i>w;i--){
      arr[i][j]=ctr;
      ctr++;
      if(isDivby11(arr[i][j])){
        brr[x][0]=i;
        brr[x][1]=j;
        x++;
      }
    }s=s-2;
  }if(N%2!=0){
    arr[w][w]=ctr;
  }for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%d\t",arr[i][j]);
    }printf("\n");
  }printf("Total Power points : %d\n",ns);
  printf("(0,0)\n");
  for(int k=1;k<x;k++){
    printf("(%d,%d)\n",brr[k][0],brr[k][1]);
  }return 0;
}
int isDivby11(int z){
  if(z%11==0){
    return 1;
  }else{
    return 0;
  }
}

