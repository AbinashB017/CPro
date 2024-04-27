#include<stdio.h>
#include<string.h>
int main(){
      char str[20];
      printf("enter:");
      gets(str);
      puts(str);
      int l=strlen(str);
      char* ptr=str;
      int v=0;
      int c=0;
      for(int i =0;i<l;i++){
            if(*ptr=='a'|| *ptr=='e' || *ptr=='i' || *ptr =='o' || *ptr =='u'){
                  v++;
            }
            else{
                  c++;
            }
            ptr++;
      }
      printf("no of vowels are %d and number of consonants are %d",v,c);
}