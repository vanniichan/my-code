#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
while(n--){
int64_t a,b,c=0;cin>>a>>b;  int e=b%a;int64_t f=b/a;
c=(f+1)*(f+1)*e+(a-e)*f*f;cout<<c<<endl;  
}}