// //sort it
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     long long arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sort(arr,arr+n,greater<long long>());
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// ------------------------
// sort it 2
// #include <bits/stdc++.h>
// using namespace std;
// long long* sort_it(int n){
//     long long* arr=new long long[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n,greater<long long>());
    
//     return arr;
// }
// int main() {
//     int n;
//     cin>>n;
//     long long* result=sort_it(n);
//     for(int i=0;i<n;i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }
// //monkey
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     while (getline(cin, s)) {
//     string temp = "";
//     for (char c : s) {
//         if(c!=' ')
//             temp += c;
//     }
//     sort(temp.begin(), temp.end());

//     cout <<temp<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int id;
    string name;
    char sec;
    int marks;
    student(){};
    student(int id, string name, char sec, int mark){
        this->id=id;
        this->name=name;
        this->sec=sec;
        this->marks=mark;
    }
    
};
int main() {
    int t;
    cin>>t;
    while (t--)
    {   
        student students[3]; 
        int a[3];
        for(int i=0;i<3;i++){
        int id,marks;
        string name;
        char sec;
        cin>>id>>name>>sec>>marks;
        students[i]= student(id,name,sec, marks);
        }
        int topIndex = 0;
        for (int i=1;i<3;i++) {
            if (students[i].marks>students[topIndex].marks ||
            (students[i].marks==students[topIndex].marks&&students[i].id<students[topIndex].id)) {
                topIndex = i;
        }
        cout<<students[topIndex].id<<" "<<students[topIndex].name<<" "<<students[topIndex].sec<<" "<<students[topIndex].marks<<endl;
    }
     
}
    return 0;
}


















// //arrays number 5
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,S;
//     cin>>n>>S;
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     bool found=false;
//     for(int i=0;i<n;i++) {
//         for(int j=i+1;j<n;j++) {
//             for (int k =j+1;k<n;k++) {
//                 if (arr[i]+arr[j]+arr[k]==S) {
//                     found=true;
//                     break;
//                 }
//             }
//             if(found)break;
//         }
//         if(found)break;
//     }

//     if(found){
//         cout<<"YES"<<endl;
//         }else{
//         cout<<"NO"<<endl;
//         }
//     }
    
//     return 0;
// }