#include<stdio.h>
#include<math.h>

int main(){
      int a,b,c;
      printf("enter a:");
       scanf("%d", &a);
      printf("enter b:");
      scanf("%d", &b);
      printf("enter c:");
      scanf("%d", &c);
      int avg = (a+b+c)/3;
      printf("the average of the three numbers is %d", avg);
      return 0;

}