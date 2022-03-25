#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    while (n--)
    {
        int64_t a,b;cin>>a>>b;
        cout<<(int64_t)((a-1)*9)+b<<endl;
    }
    
}