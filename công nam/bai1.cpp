//Nhập từ bàn phím mảng số nguyên gồm n phần tử.
//1.	Tính trung bình cộng các số lẻ ở vị trí chẵn
//2.	Tìm số lớn nhất trong mảng vừa nhập
//3.	Tìm vị trí các số nhỏ nhất trong mảng
//4.	Đếm các số chính phương có trong mảng
//5.	Hiện thị các số nguyên tố có trong mảng lên màn hình
//6.	Thay thế các phần tử âm có trong mảng bằng giá trị 0
//7.	Xóa các phần tử âm có trong mảng
//8.	Sắp xếp mảng đã nhập theo thứ tự tăng dần

//bai1
#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[1000],i,sum=0,dem=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0&&i%2==0){
			sum+=a[i];dem++;
		}
	}
	printf("%d",sum/dem);
}
//bai2
#include<stdio.h>
int main(){
	int n,i;int max=-1e9;int m;
	scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&m);
       if(m>max){
		max=m;
	   }
	}
	printf("%d",m);
}
//bai3
#include<stdio.h>
int main(){
	int n,i;int min=1e9;int m[1000];
	scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&m[i]);
       if(m[i]<min){
		min=m[i];
	   }
	}
	for(i=0;i<n;i++){
		if(m[i]==min) printf("%d ",i);
	}
}
//bai4
#include<stdio.h>
#include<math.h>
int check(int n){
	int m=sqrt(n);
	if(m*m==n) return 1;
	return 0;
}
int main(){
   int n,dem=0,i,a[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	if(check(a[i])) dem++;
   }
printf("%d",dem);
}
//bai5
#include<stdio.h>
int check(int n){
	if(n==1) return 0;
	if(n==0) return 0;
	int i;
	for(i=2;i<=n/2;i++){
       if(n%i==0) return 1;
	}
	return 0;
}
int main(){
	int n,i,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
		if(check(a[i])){
			printf("%d ",a[i]);
		}
	}
}
//bai6
#include<stdio.h>
int main(){
	int n,i,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
		if(a[i]<0){
			a[i]=0;
		}
	printf("%d ",a[i]);

	}
}
//bai7
#include<stdio.h>
int main(){
	int n,i,j,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			for(j=i;j<n-1;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
//bai8
#include<stdio.h>
int main(){
	int n,i,j,a[1000],swap;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
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
