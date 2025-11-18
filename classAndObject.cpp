// data type--
// build-in data type
//int--> 10,20,30,40
//char --> a,b,c,d;
//string --> abrcde;
//user defined data type
//class 
#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char section;
    float gpa;

};
int main() {
    Student a,b;
    // char temp[100] ="Joydep Dhar";
    // a.roll=12;
    // a.gpa=3.80f;
    // strcpy(a.name,temp);
    // cin>>a.name>>a.roll>>a.gpa;
    // cin>>b.name>>b.roll>>b.gpa;
    // cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    // cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    return 0;
}