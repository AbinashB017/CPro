#include<stdio.h>
#include<string.h>

int main(){
      char str[50];
      gets(str);
      int count[128]={0};for(int i=0;i<128;i++)printf("%d",count[i]);

      puts(str);
      for(int i=0;i<strlen(str);i++){
            char x=str[i];
            count[x]++;
      
      }
      
      for(int i=0;i<128;i++){
            if(count[i]>0){
                  printf("'%c' occurs %d times\n",i,count[i]);
            }
      }
      
}