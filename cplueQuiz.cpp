// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string x, y;
//     cin >> x >> y;
//     string result = "";
//     int n = x.size();
//     int m = y.size();
//     for (int i=0;i< n;i++) {
//         bool match = true;
//         if (i+m<=n) {
//             for (int j=0;j<m;j++) {
//                 if (x[i+j]!=y[j]){
//                     match=false;
//                     break;
//                 }
//             }
//         } else{
//             match=false;
//         }
//         if(match) {
//             result+='#';
//             i += m-1;
//         }
//         else{
//             result+=x[i];
//         }
//     }
//     cout << result << endl;
//     return 0;
// }
// // // -----------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     string target ="Jessica.";
//     int n=s.size();
//     int m=target.size();
//     bool isPresent=false;

//     for(int i=0;i<=n;i++){
//         bool match=true;
//         for(int j=0;j<m;j++){
//             if(s[i+j]!=target[j]){
//                 match=false;
//                 break;
//             }
//         }
//         if(match){
//             isPresent=true;
//             break;
//         }

//     }
//     if(isPresent){
//         cout<<"YES";
//     }else{
//         cout<<"No";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     string target="Jessica";

//     stringstream ss(s);
//     string word;
//     bool found=false;

//     while(ss >> word) {
//         if(word==target) {
//             found=true;
//             break;
//         }
//     }

//     cout<<(found?"YES":"NO");
//     return 0;
// }

// ---------------------------------------------------
// // reversing;
// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string nam;
//     int cls;
//     char sec;
//     int id;

// };
// int main() {
//     int n;
//     cin>>n;
//     Student a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i].nam>>a[i].cls>>a[i].sec>>a[i].id;
//     }
//     int l=0,r=n-1;
//     while(l<r) {
//         swap(a[l].sec, a[r].sec);
//         l++;
//         r--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i].nam<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
//     }
//     return 0;
// }
// sort it
// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string nm;
//     int cls;
//     char sec;
//     int id;
//     int math_marks;
//     int eng_marks;
// };
// int main() {
//     int n;
//     cin>>n;
//     Student a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
//     }
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n-i-1;j++){

//             int total1=a[j].math_marks+a[j].eng_marks;
//             int total2=a[j+1].math_marks+a[j+1].eng_marks;
//             if (total1<total2) {
//                 swap(a[j],a[j+1]);
//             }
//             else if(total1==total2&&a[j].id>a[j+1].id){
//                 swap(a[j], a[j+1]);
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string nm;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

int main() {
    int n;
    cin >> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (a[j].eng_marks < a[j+1].eng_marks) {
                swap(a[j],a[j+1]);
            }
            else if(a[j].eng_marks==a[j+1].eng_marks&&a[j].math_marks<a[j+1].math_marks){
                swap(a[j], a[j+1]);
            }
            else if(a[j].eng_marks == a[j+1].eng_marks && a[j].math_marks==a[j+1].math_marks && a[j].id>a[j+1].id){swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<< endl;
    }
    return 0;
}
