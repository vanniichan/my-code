#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t m,n,t,i,a,mx=0,cnt[1008]={0};
    cin>>t;
    set<int64_t>s;

    for(i=0; i<t; i++)
    {
        cin>>a;
        s.insert(a);
        cnt[a]++;
        mx=max(mx, cnt[a]);
    }
    cout<<mx<<" "<<s.size();
    return 0;

}