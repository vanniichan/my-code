#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    ios::sync_with_stdio(0);
    fi.tie(0);
    fo.tie(0);
    int64_t n;fi>>n;
    fo<<n*(n*(n+1)/2)-n*(n+1)*(2*n+1)/6+n;
    return 0;
}