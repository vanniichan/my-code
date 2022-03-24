#include<bits/stdc++.h>
using namespace std;
int64_t a[120000];int64_t l[120000];
int64_t r[120000];
int main()
{ios_base::sync_with_stdio(false);
       int64_t n;
       cin >> n;
       for (int i = 1; i <= n; i++)
       cin >> a[i];
       l[1] = a[1];
       for (int i = 2; i <= n; i++)
       l[i] = __gcd(l[i - 1], a[i]);
       r[n] = a[n];
       for (int i = n - 1; i >= 1; i--)
       r[i] = __gcd(r[i + 1], a[i]);
       int64_t ans = 1;
       for (int i = 2; i <= n-1; i++)
         ans = max(__gcd(l[i - 1], r[i + 1]), ans);
     cout << max(ans,max(r[2],l[n-1])) << endl;
 }