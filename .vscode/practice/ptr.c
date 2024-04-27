#include<stdio.h>
int main(){
      int a,b;
      printf("enter the two numbers:");
      scanf("%d %d",&a,&b);
      int* x=&a;
      int* y=&b;
      int sum=*x+*y;
      printf("%d",sum);
}