#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, k;
int a[100001];
map<int, int> mp;
int main (){
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    int cur=1;
    for (int _=1; _<=min (30, k);_++)
    {
       mp.clear ();
        cur *= 2;
        ll ans=0;
        for (int i=1; i<=n; i++)
        {
            if (mp.count (cur - a[i]))
                ans += mp.count(cur - a[i]);
            mp[a[i]]++;
        }
        cout << ans << '\n';
    }
    for (int i=31; i<=k; i++)
        cout << 0 << '\n';
        }