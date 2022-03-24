#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;cin>>n;char a[n+1];
   vector<int> h(n+1,0);
   vector<int> p(n+1,0);
   vector<int> s(n+1,0);
   for(int i=0;i<n;i++){
       cin>>a[i];
       h[i+1]=h[i]+(a[i]=='H');
       p[i+1]=p[i]+(a[i]=='P');
       s[i+1]=s[i]+(a[i]=='S');
   }
   int MAXWINS=0;
   for(int i=1;i<=n;i++){
       int BEGIN=max(h[i],max(p[i],s[i]));
       int END=max(h[n]-h[i],max(p[n]-p[i],s[n]-s[i]));
       MAXWINS=max(MAXWINS,BEGIN+END);
   }
   cout<<MAXWINS<<endl;
}