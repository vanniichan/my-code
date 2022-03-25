#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;int k;cin>>n>>k;
    vector<int64_t> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int64_t> count(k+1,0);
    count[0] = 1;
    for (int i = 1; i <= k; i++)
        for (int j = 0; j < n; j++)
            if (i >= arr[j]){
                count[i] += count[i - arr[j]];
                count[i]=count[i]%1000000007;
                }
    cout<<count[k];
}