#include<stdio.h>

int sum(int n){
      if(n!=0){
            return (n%10+ sum(n/10));
      }
      else{
            return 0;
      }
}

int main(){
      int k;
      printf("enter the number of digits");
      scanf("%d",&k);
      int r=sum(k);
      printf("%d",r);
      return 0;
}