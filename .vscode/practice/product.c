#include<stdio.h>

int product(int x,int y){
      if(x<y){
            return product(y,x);
      }
      else if(y!=0){
            return x+product(x,y-1);
      }
      else{
            return 0;
      }
}

int main(){
      int k=product(5,2);
      printf("%d",k);
}