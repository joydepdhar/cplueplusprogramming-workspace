#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    // if(a<b){
    //     cout<<"Large number: "<<b;
    // }else{
    //     cout<<"Large Num: "<<a;
    // }
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}