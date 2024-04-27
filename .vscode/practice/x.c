#include<stdio.h>
int b,c;
int swap(int x,int y){
      int temp;
      temp=x;
      x=y;
      y=temp;
      
      b = x;
      c = y;
      return b;
      return y;
}
int main(){
      int n1,n2;
      printf("enter two numbers:");
      scanf("%d %d",&n1,&n2);
      swap(n1,n2);
      //printf("%d %d",b,c);
}