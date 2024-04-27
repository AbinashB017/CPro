#include<stdio.h>
int main(){
      int n,sum=0,temp,r;
      printf("enter the number:");
      scanf("%d",&n);
      temp=n;
      while(n>0){
            r=n%10;
            r=r*r*r;
            sum=sum+r;
            n=n/10;
      }
      if(temp==sum){
            printf("armstrong number");
      }
      else{
            printf("not armstrong number");
      }
      return 0;
}