#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool mot = false;
    int zero = 0;
    for(int i = 0;i<s.size(); ++i) {
        if(s[i] == '1') mot = true;
        else if(mot== true) ++zero;
    }
    cout<<((mot && zero >= 6)? "yes" : "no");
    return 0;
}