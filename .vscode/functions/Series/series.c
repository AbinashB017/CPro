#include<stdio.h>
int main(){
      int i,j,n;
      printf("enter n:");
      scanf("%d",&n);
      float sum=0.0;
      for(i=1;i<=n;i++){
            int term=0;
            for(j=1;j<=i;j++){
                  term=term+j;
            }
            
            sum=sum+1.0/(float)term;
      }
      printf("%f",sum);
}