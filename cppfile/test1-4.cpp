#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    ios::sync_with_stdio(0);
    fi.tie(0);
    fo.tie(0);
    int64_t n,m;fi>>n>>m;int d1=0,d2=0;
    if(m%n!=0) fo<<"-1";
    else{
        int64_t a=m/n;
        while(a!=1){
            if(a%2==0){
                a/=2;d1++;
            }
            if(a%3==0){
                a/=3;d2++;
            }
        }
        fo<<d1+d2;
    }
    return 0;
}