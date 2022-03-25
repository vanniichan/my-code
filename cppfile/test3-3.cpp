#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,b;
    cin>>n>>k>>b;int64_t e=n;
    vector<int64_t> a(n+1,0);
    for(int i=0;i<b;i++){
        int m;cin>>m;
        a[m]=1;
    }
    for(int i=1;i<=n;i++){
       a[i]+=a[i-1];
    }
    for(int i=k;i<=n;i++){
        int64_t d;
        d=a[i]-a[i-k];
       e=min(e,d); 
    }
    cout<<e;
}