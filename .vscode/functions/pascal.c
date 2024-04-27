

#include<stdio.h>

int fact(n){
      int fact =1;
      for(int i=1;i<=n;i++){
            fact=fact*i;
      }
      return fact;

}

int ncr(int n, int r){
      int ncr=fact(n)/(fact(r)*fact(n-r));
      return ncr;
}

int main(){
      int i,j,n;
      printf("enter the  number of rows");
      scanf("%d",&n);
      for(i=0;i<=n;i++){
            for(j=1;j<=n-i;j++){
                  printf(" ");
            }
            for(j=0;j<=i;j++){
                  printf(" %d", ncr(i,j));
            }
            printf("\n");
      }
      
      return 0;
}