#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    ios::sync_with_stdio(0);
    fi.tie(0);
    fo.tie(0);
    int n;fi>>n;
    while(n--){
        int x,y,a,b;fi>>x>>y>>a>>b;
        if(x==0&&y==0||a==0&&b==0) fo<<0<<endl;
        else if((x-y)==0){
            if(a<=b/(2)) fo<<a*(x+y)<<endl;
            else fo<<b*x<<endl;
        }
        else{
            if(a<=b/(2)) fo<<a*(x+y)<<endl;
            else fo<<a*abs(x-y)+b*min(x,y)<<endl;
        }
    }
    return 0;
}