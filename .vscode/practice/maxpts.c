#include<stdio.h>
int main(){
      int a,b;
      printf("enter the two numbers:");
      scanf("%d %d",&a,&b);
      int* x=&a;
      int* y=&b;
      if(*x<*y){
            printf("max is %d",*y);
      }
      else printf("max is %d",*x);

}