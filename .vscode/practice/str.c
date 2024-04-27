#include<stdio.h>
#include<string.h>
int main(){
      char str[40];
      printf("enter the sentence:");
      gets(str);
      puts(str);
      int i=0;
      int j=strlen(str)-1;
      while(i<j){
            int temp=str[j];
            str[j]=str[i];
            str[i]=temp;
            i++;
            j--;
      }
      printf("the reverse is :%s",str);

}