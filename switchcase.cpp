#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"Sat\n";
    case 2:
        cout<<"SUN\n";
    default:
        break;
    }
    return 0;
}