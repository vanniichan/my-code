#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    ios::sync_with_stdio(0);
    fi.tie(0);
    fo.tie(0);
    int t;fi>>t;
    while(t--){
    int n;fi>>n;
    vector<int> a(n,0);
    for(int &i:a) fi>>i;
    sort(a.rbegin(),a.rend());
    for(int i:a) fo<<i<<" ";
    fo<<endl;
    }
    return 0;
}