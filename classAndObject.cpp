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
    Student a;
    char temp[100] ="Joydep Dhar";
    a.roll=12;
    a.gpa=3.80f;
    strcpy(a.name,temp);
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    return 0;
}