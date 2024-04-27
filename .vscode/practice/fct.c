#include<stdio.h>

int fct(int n){
      if(n==0 || n==1){
            return 1;
      }
      return n*fct(n-1);
}
int main(){
        int k=fct(4);
        printf("%d",k);
}