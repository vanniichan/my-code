#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;int a=s.size();
        vector<int> dp(a+1,0);
        dp[0]=1;dp[1]=1;
        for(int i=2;i<=a;i++){
            if(s[i-1]>'0') dp[i]=dp[i-1];
            if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7')) dp[i]+=dp[i-2];
        }
        cout<<dp[a] << (n>0?'\n':' ');

    }
}