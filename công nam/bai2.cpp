#include<stdio.h>
#include<stdlib.h>
void nhapmang(int &n,int a[]){
	int i;scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int timkiem(int n,int a[]){
	int max=-1e9,i;
	for(i=0;i<n;i++){
		if(a[i]%2==0&&a[i]>max&&a[i]<0) max=a[i];
	}
	return max;
}
int tinhtongodd(int n,int a[]){
	int i,sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0) sum+=a[i];
	}
	return sum;
}
int gcd(int a,int b){
      int res = 0;
      while (b > 0){
         int temp = b;
         b = a % b;
         a = temp;
         res = a;
      }
      return res;
   }
int tinhgcd(int n,int a[]){
	int i;int gd=a[0];
	for(i=0;i<n;i++){
		gd=gcd(gd,abs(a[i]));
	}
	return gd;
}
void sortandout(int n,int a[]){
	int i,j,swap;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
            if(a[i]<a[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
int n,a[1000];

int m;
scanf("%d",&m);
switch (m)
{
case 1:
	nhapmang(n,a);
	break;
case 2:
nhapmang(n,a);
    printf("%d",timkiem(n,a));
	break;
case 3:
nhapmang(n,a);
    printf("%d",tinhtongodd(n,a));
	break;
case 4:
nhapmang(n,a);
    printf("%d",tinhgcd(n,a));
	break;
case 5:
nhapmang(n,a);
sortandout(n,a);
break;
default:
	break;
}
}
