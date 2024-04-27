#include<stdio.h>

int fact(n){
      int fact=1;
      for(int i=2;i<=n;i++){
            fact=fact*i;
      }
      return fact;
}

int combination(int n,int r){
      int ncr=fact(n)/(fact(r)*fact(n-r));
      return ncr;
}

int main(){
      int n,r;
      printf("enter the numbers:\n");
      scanf("%d %d",&n,&r);
      int nCr= combination(n,r);
      printf("%d",nCr);
      return 0;
}