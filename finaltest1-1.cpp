#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    int n;cin>>n;
    while(n--){
        int x,i=0;cin>>x;
        vector<int64_t> a;
        a.push_back(9);
        while(a[i]%x!=0){
            a.push_back(a[i]*10);
            a.push_back(a[i]*10+9);
            i++;
        }
        for(int j=0;j<=i;j++)
        fo<<a[j]<<endl;
    }
}