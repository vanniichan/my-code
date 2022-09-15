//BÙI ĐỨC MINH- HE170083
//program 1:

#include<stdio.h>
int main(){
double num1,num2;
char op;
double result;
printf("Enter an expression: ");
scanf("%lf %c %lf",&num1,&op,&num2);
printf("\nResult: ");
switch (op)
{
case '+':
result=num1+num2;
printf("%lf",result);
break;
case '-':
result=num1-num2;
printf("%lf",result);
break;
case '*':
result=num1*num2;
printf("%lf",result);
break;
case '/':
if(num2==0){
printf("Divide by 0");
}
else{
result=num1/num2;
printf("%lf",result);}
break;
default:
printf("Op is not supported");
break;
}
}



//Program 2:

#include<stdio.h>
int main(){
int income;
int n;
int pa=9000000;
int pd=3600000;
int tf,ti;
printf("Your income of this year: ");
scanf("%d",&income);
printf("Number of dependent: ");
scanf("%d",&n);
tf=12*(pa+n*pd);
printf("Tax-free income: %d\n",tf);
ti=income-tf;
printf("Taxable income: %d\n",ti);
printf("Income tax: ");
if(ti<=0){
printf("0");
}else{
if(ti<=5000000){
printf("%d",ti/20);
}else if(ti<=10000000 &&ti>5000000){
printf("%d",(ti-5000000)/10+5000000/20);
}else if(ti<=18000000 && ti>10000000){
printf("%d",(ti-10000000)*3/20+5000000/10+5000000/20);
}else{
printf("%d",(ti-18000000)/5+8000000*3/20+5000000/10+5000000/20);
}
}
}



//Program 3:

#include<stdio.h>
int main(){
int sum=0;
int x;
do{
printf("Enter X :");
scanf("%d",&x);
sum+=x;
}while(x!=0);
printf("Sum of number x other than 0 = %d",sum);
}




//Program 4: 

#include<stdio.h>
int main(){
int x,y;
do{
printf("Enter x,y: ");
scanf("%d %d",&x,&y);
x^=y;y^=x;x^=y;
printf("After swap x= %d ; y= %d \n",x,y);
}while(x!=0&&y!=0);
return 0;
}


//Program 5:

#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("Enter String:");
int nVowels=0;
int nConsonants=0;
int nOther=0;
do{
ch=getchar();
ch=toupper(ch);
if( ch>='A' && ch<='Z'){
switch (ch) {
case 'A' :
case 'E' :
case 'I' :
case 'O' :
case 'U' : nVowels ++; break;
default: nConsonants++;
break;
}
}
else {
nOther++;
}
}while(ch!='\n');
printf("nVowels= %d\n",nVowels);
printf("nConsonants= %d\n",nConsonants);
printf("nOther= %d\n",nOther-1);
}



//Program 6:

#include<stdio.h>
#include<ctype.h>
int main(){
int i;
for( i=1;i<=255;i++){
printf("%c : %d, %o, %X\n",i,i,i,i);
//if(i !=0 &&i %20==0) getchar();
}
}




//Program 7:

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

