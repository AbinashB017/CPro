#include<stdio.h>

int main(){
      int p,t,r,s;
      
      printf("enter principle:");
      scanf("%d", &p);

      printf("enter time:");
      scanf("%d", &t);

      printf("rate:");
      scanf("%d", &r);

      
      s = (p*t*r)/100;
      printf("simple interest is %d", s);
      return 0;

}