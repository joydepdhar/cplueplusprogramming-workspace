#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin>>x;
    int a=x;
    if(a>=65&& a<=90){
        cout<<"ALPHA\n IS CAPITAL";
    }else if(a>=48&&a<58){
        cout<<"IS DIGIT";
    }else if(a>=97&& a<=122){
        cout<<"ALPHA\n IS SMALL";
    }
    return 0;
}