#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n,k,v1,v2;
    cin>>n>>k;
    vector<int64_t> a(n);
    map<int64_t,int64_t> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
       int j=n-1;
       if(a[i]+a[j]==k) {
           v1=i;v2=j;
       }
       
    }
}