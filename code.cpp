#include <bits/stdc++.h>
#define name "money sum"
using namespace std;
ifstream fi (name".inp");
ofstream fo (name".out");
int dp[100005];
int main (){
    ios::sync_with_stdio (0);
    fi.tie(0);
    fo.tie(0);
    int n;fi >> n;
    vector<int> a (n);
    for (auto &i:a) fi >> i;
    int s = accumulate (a.begin (), a.end (),0LL);
    dp[0]=1;
    for (int i=0;i<n;++i) {
        for (int j=s;j>0;--j) {
            if (a[i]==j) dp[j]%=1;
            else if (a[i]<j) dp[j]=dp[j]|dp[j-a[i]];}}
    vector<int> res;
    for (int i=1;i<=s;++i) if (dp[i]) res.push_back (i);
    fo << res.size () << '\n';
    for (auto i:res) fo << i <<' ';
    fo << "\nTime: "<< clock ()/ (double)10000 << " sec.";
    return 0;
	}