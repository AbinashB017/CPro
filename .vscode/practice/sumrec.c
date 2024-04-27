#include<stdio.h>

int sum(int n){
      if(n==1 || n==0) return n;
      return n+sum(n-1);

}
int main(){
      int k= sum(5);
      printf("%d",k);
}