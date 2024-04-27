#include<stdio.h>

int power(int a,int b){
      if (b==0) return 1;
      return a*power(a,b-1);
          

}
int main(){
      int k=power(5,2);
      printf("%d",k);
}