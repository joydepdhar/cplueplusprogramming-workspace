#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    int roll;
    int marks;
};


int main() {
    // int n;
    // cin>>n;
    // cin.ignore();
    // Student a[n];
    // for(int i=0;i<n;i++){
    //     getline(cin,a[i].name);
    //     cin.ignore();
    //     cin>>a[i].cls>>a[i].roll;
    // }  
    // for(int i=0;i<n;i++){
    //     cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].roll<<endl;
    // }
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        // getline(cin,a[i].name);
        // cin.ignore();
        cin>>a[i].name>>a[i].cls>>a[i].roll>>a[i].marks;
    }  
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mn=min(a[i].marks,mn);
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].roll<<endl;
    // }
    cout<<mn<<endl;
    return 0;
}