#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;int64_t s2=0;
    cin>>s;
    int dem=0;
    while(s.size()!=1){
        int b=s.size();
         for(int i=0;i<b;i++){
             s2+=(s[i]-'0');
         }
         s=to_string(s2);
         dem++;
         s2=0;    
    }
    cout<<dem;
}