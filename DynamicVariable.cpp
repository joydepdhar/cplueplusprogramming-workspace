#include <bits/stdc++.h>
using namespace std;
int *p;
void fun(){
    int x=10;
    p=&x;
    cout<<"Fun -> "<<*p<<endl;
    return;
}
int main() {
    // int x=10; //stack memory 
    // int *P=new int;
    // *P=100 ; //heap memory
    // cout<<*P<<endl;
    fun();
    cout<<"Main -> "<<*p<<endl;
    return 0;
}