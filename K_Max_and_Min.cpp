// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a>b){
//         if(a>c){
//             cout<<c <<" "<<a<<" ";
//         }
//     }
//     else if(b>a){
//         if(b>c){
//             cout<<c <<" "<<b<<" ";
//         }else{
//             cout<<c;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mn = a, mx = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    cout << mn << " " << mx;

    return 0;
}
