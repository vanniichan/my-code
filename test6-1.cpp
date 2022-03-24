#include <bits/stdc++.h>
using namespace std;
void findWays(int N)
{
    vector<int64_t> dp(N+1,0); 
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= min(i,6); j++) {
                dp[i] = dp[i] + dp[i - j];
               dp[i]= dp[i]%1000000007;
        }
    }
    cout << dp[N];
}
int main()
{
    int N;cin>>N;
    findWays(N);
    return 0;
}