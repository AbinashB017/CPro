/*#include<stdio.h>

int main(){
      int x,y,z;
      printf("enter the numbers:\n");
      scanf("%d %d %d", &x, &y, &z);

      if(x>y && x>z){
            printf("%d is the greatest number", x);
      
      }
      if(y>x && y>z){
            printf("%d is the greatest number", y);
      
      }
      else{
            printf("%d is the greatest number", z);
      }

      return 0;
}*/

/*#include<stdio.h>

int main(){
      int x,y;
      printf("enter the coordinates:\n");
      scanf("%d %d", &x, &y);
      if(x>0 && y>0){
            printf("(%d,%d) lies in the first quad", x,y);
      }
      else if(x<0 && y>0){
            printf("(%d,%d) lies in the second quad", x,y);
      }
      else if(x<0 && y<0){
            printf("(%d,%d) lies in the third quad", x,y);
      }
      else{
            printf("(%d,%d) lies in the second quad", x,y);
      }
      return 0;

}*/

#include<stdio.h>

int main(){
      int s1,s2,s3;
      printf("enter the sides:\n");
      scanf("%d %d %d", &s1, &s2, &s3);
      if(s1==s2 && s2==s3){
            printf("equilateral");
      }
      else if(s1==s2 || s2==s3 || s3==s1){
            printf("isosceles");

      }
      else{
            printf("scalene");
      }
      return 0;
}