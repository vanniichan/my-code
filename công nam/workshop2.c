#include<stdio.h>
#include<ctype.h>
int main(){
	char c1,c2;
	int d;
	char swap;
	char c;
	scanf("%c %c",&c1,&c2);
	if(c1>c2){
		swap=c1;
		c1=c2;
        c2=swap;
	}
	d=c2-c1;
	printf("different= %d\n",d);
	for(c=c1;c<=c2;c++){
		printf("%c: %d,%o,%X\n",c,c,c,c);
	}
}
