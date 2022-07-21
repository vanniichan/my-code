#include <stdio.h>
#include <string.h>
int main(){
    char str[1000],number[1000];
    gets(str);
    int i=0,c=0;
    while(str[i]!='\0'){
        i++;if(str[i]>='0'&&str[i]<='9'){
            c++;
        }
    }

    for(int j=0;j<i;j++){
        if(str[j]>='0'&&str[j]<='9'){
              c--;
            number[c]=str[j];
          
        }
        
    }
    for(int j=0;j<i;j++){
          if(str[j]>='0'&&str[j]<='9'){
            printf("%c",number[c]);
            c++;
          }else{
            printf("%c",str[j]);
          }
    }
}