#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n,p;cin>>n>>p;
    vector<int64_t> a(n),pre(n+2,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=p;i++){
        int64_t l,r,x;
        cin>>l>>r>>x;
        if(l>r){
            l^=r;r^=l;l^=r;
        }
        pre[l]+=x;pre[r+1]-=x;
    }
    for(int i=0;i<=n;i++){
        pre[i+1]+=pre[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]+pre[i+1]<<" ";
    }
    return 0;
}