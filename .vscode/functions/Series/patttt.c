#include<stdio.h>
int main(){
      int i,j,n;
      printf("enter the number of rowS");
      scanf("%d",&n);
     ;
      for(i=n;i>=1;i--){
             char ch='A';
            
            for(j=1;j<=i;j++){
                  printf("%c",i);
                  ch++;
                  
            }
            
            printf("\n");
            
      }
      return 0;
}