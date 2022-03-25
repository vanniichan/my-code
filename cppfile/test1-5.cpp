#include<bits/stdc++.h>
using namespace std;
ifstream fi("input.inp");
ofstream fo("ouput.out");
int main(){
    ios::sync_with_stdio(0);
    fi.tie(0);
    fo.tie(0);
    int n;fi>>n;
    int a[n][2];int d[1000];memset(d,0,1000);int k=1;
    for(int i=1;i<=n;i++){
        fi>>a[i][1]>>a[i][2];
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i][1]==a[j][1]){
                if(a[i][2]==a[j][2]){ d[k]++;
                if(j==n) k++;}
                else {k++; break;}
            }
            else{
                k++;
            }
        }
    }
    int max=0;
    for(int i=1;i<=k;i++){
        if(d[i]>max) max=d[i];
    }
    fo<<max+1;
    return 0;
}