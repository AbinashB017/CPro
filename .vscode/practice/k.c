#include<stdio.h>
int main(){
      int i,j,n;
      printf("enter the number of rows");
      scanf("%d",&n);
      for(i=0;i<n;i++){
            for(int k=0;k<=n-i;k++){
                  printf(" ");
            }
            for(j=2*i-1;j>0;j--){
                  printf("*");
            }
            printf("\n");
      }
}