#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)  
    {
        s[i]=toupper(s[i]);
    }
    // cout<<s;
    int e=0,g=0,p=0,y=0,t=0;
    for(char c:s){
        if (c == 'E') e++;
        if (c == 'G') g++;
        if (c == 'Y') p++;
        if (c == 'P') y++;
        if (c == 'T') t++;
    }
    int ans = min({e,g,y,p,t});
    cout<<ans;

    return 0;
}