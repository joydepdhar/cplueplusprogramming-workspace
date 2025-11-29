#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int flag=0;
    cin>>s;
    for(int i=0;i < s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES";
    }else{
    cout<<"NO";
    }
    return 0;
}