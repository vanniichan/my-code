#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
	char x=(char)a;
	char y=(char)b;
	if(strlen(a)!=strlen(b)) return strlen(a)<strlen(b)?-1:1;
	else{
		if(strcmp(a,b)<0) return -1;
		return 1;
	}
}
int main(){
	char c[1000],a[20][50];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while(token !=NULL){
		strcpy(a[n],token); 
		n++;
		token =strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;++i){
		if(i!=n-1) printf("%s ",a[i]);
		else printf("%s",a[i]);
	}
}