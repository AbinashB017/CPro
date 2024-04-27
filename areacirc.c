#include<stdio.h>

int main(){
      int r;
      float pi= 3.14;
      printf("enter the radius:");
      scanf("%d", &r);
      float area= pi*r*r;
      printf("the area of the circle is %f", area);
      return 0;

}