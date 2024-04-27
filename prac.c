#include<stdio.h>

int main(){
      int i,j,n;
      printf("enter the n umber of rows:");
      scanf("%d",&n);
      for(i=n;i>0;i--){
            for(j=0;j<n-i;j++){
                  printf(" ");
            }
            char ch='A';
            for(j=1;j<=i;j++){
                  printf("%c",ch);
                  ch++;
            }
            printf("\n");
      }
      
      return 0;
}