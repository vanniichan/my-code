#include <bits/stdc++.h>
using namespace std;
int n,x;
set<int> a;
bool OK (int x) {
   for (auto i :a) {
      int v = x-i;
      if (v<0) continue;
      if (a.find (v) !=a.end () && v!=i)
         return true;
   }
   return false;
}
int main ()
{
  cin >> n >> x;
   for (int i=0;i<n;++i) {
      int x;
     cin >> x;
     a.insert (x) ;
   }
   int l=0, r=x, res =0;
   while (l<=r) {
      int m = (l+r) /2;
      if (OK(m)) {
         res=m;
         l=m+1;
      }
      else{
         r=m-1;
   }
    }
   cout<< res << '\n';
   return 0;
}