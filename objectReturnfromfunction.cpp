#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa){
        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).gpa=gpa;
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
Student fun(){
    Student rahim(1,5,5.00);
    return rahim;
}
int main() {
    // Student rahim;
    // rahim.roll=45;
    // rahim.cls=5;
    // rahim.gpa=4.10;
    // Student rahim(1,5,5.00);
    Student obj=fun();
    Student karim(2,5,4.99);
    cout<<obj.roll<<" "<<obj.cls<<" "<<obj.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    
    return 0;
}