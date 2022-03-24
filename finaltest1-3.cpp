#include<iostream>
using namespace std;
int main() {
    int x,y,m;
    cin>>x>>y>>m;
    int ans=0;
    for(int a=0; a<=m/x; a++) {
        int b=(m-a*x)/y;
        int thetich=a*x+b*y;
        ans=max(ans,thetich);
    }
    cout<<ans;
}