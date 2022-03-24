#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> a(k+1,0);
    a[0]=1;
    for(int i=0;i<n;i++){
        int b;cin>>b;
        for (int j=b; j<=k; ++j){
            a[j]+=a[j-b];
            a[j]%=1000000007;
        }
    }
    cout<<a[k];
}