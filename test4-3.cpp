#include <bits/stdc++.h>
#define ll int64_t
using namespace std;

int P(ll x) {
   if (x==1) return 0;
   if (x==2) return 1;
   ll v = 1;
   while (v<x) {
      v*=2;
}
   v/=2;
   return 1-P (x-v) ;
}
int main (){
  ll n,k;
  cin >> n >> k;
   for (ll i = n; i<n+k; ++i) {
      cout<< P(i) ;
   }
   return 0;
   }