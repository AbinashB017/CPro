#include<stdio.h>
#include<stdlib.h>

int main(){
      int a,b;
      printf("Enter number x : ");
      scanf("%d",&a);
      printf("Enter number y : ");
      scanf("%d",&b);
      if(abs(100-a)>abs(100-b)){
            printf("%d is closer to 100",b);
      }
      else{
            printf("%d is closer to 100",a);
      }
      return 0;
}