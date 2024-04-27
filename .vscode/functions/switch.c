#include<stdio.h>
#include<math.h>
int main(){
      int a,b,n,x,y,z;
      printf("enter the numbers:\n");
      scanf("%d %d",&a,&b);
      printf("enter the operator:\n");
      scanf("%d",&n);
      x=sqrt(a);
      y=sqrt(b);
      z=pow(a,b);
      switch(n){
            case 1:printf("the addition is %d+%d=%d",a,b,(a+b));
                   break;
            case 2:printf("the sjubstraction is %d-%d=%d",a,b,(a-b));
                   break;  
            case 3:printf("the product is %dx%d=%d",a,b,(a*b));
                   break;
            case 4:printf("the addition is %d/%d=%d",a,b,(a/b));
                   break;
            case 5:printf("the square root is %d %d",x,y);
                   break; 
            case 6:printf("the power is %d",z);
                   break; 
            default:printf("invalid");

      }
      return 0;
}