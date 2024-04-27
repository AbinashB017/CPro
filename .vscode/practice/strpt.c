#include<stdio.h>

int calclen(char* ch){
      int count =0;
      while(*ch!= '\0'){
            count++;
            ch++;
      }
      return count;
}
int main(){
      char str[20];
      gets(str);
      puts(str);
      int k=calclen(str);
      printf("%d",k);
}