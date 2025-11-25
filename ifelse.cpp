#include <iostream>
using namespace std;
void even(int num){
    if(num%2==0){
        cout<<"Even\n";
    }else{
        cout<<"odd\n";
    }
}
int main() {
    int x=6;
    even(x);
    return 0;
}