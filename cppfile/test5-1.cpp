#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;cin>>n;
    int m=n.size()-1;
    int k=0;
    for(int i=0;i<=m;i++){
        k+=(n[i]-'0');
    }
    for(int i=0;i<=m;i++){
        for(int j=9;j>=1;j--){
            int l=k-n[i];
            if(j>(n[i]-'0')){
                if((l+j)%3==0){
                    n[i]=j+'0';
                    cout<<n;
                    return 0;
                }
            }
        }
    }
    for(int i=9;i>=i;i--){
        int l=k-(n[m]-'0');
        if((l+i)%3==0){
            n[m]=i+'0';
            break;
        }
    }
    cout<<n;
}