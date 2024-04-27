#include<stdio.h>
#include<string.h>
int main(){
      int i,j,n;
      char str[25];
      printf("enter ");
      gets(str);
      puts(str);
      n=strlen(str);
      char* ptr=str;
      for(i=n-1;i>=0;i--){
            printf("%c",*(ptr+i));
      }


}