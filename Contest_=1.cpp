// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         int arr[11];
// //         for (int i = 0; i < n; i++) {
// //             cin >> arr[i];
// //         }
// //         int closest = arr[0];
// //         for (int i = 1; i < n; i++) {
// //             if (arr[i] > closest) {
// //                 closest = arr[i];
// //             }
// //         }
// //          cout << closest << "\n";
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string num;
//     cin>>num;
//     long long odsum=0,evsum=0;
//     int pos=1;
//     for(int i=num.size()-1;i>=0;i++){
//         int digit = num[i] - '0';
//         if(pos%2 ==1){
//             odsum+=digit;
//         }else{
//             evsum+=digit;
//         }
//         pos++;
//     }
//     long long diff=abs(odsum-evsum);
//     if(diff%11==0){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char num[105];
    scanf("%s", num);
    long long oddSum = 0, evenSum = 0;
    int pos = 1;
    int len = strlen(num);
    for (int i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';

        if (pos % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        pos++;
    }

    long long diff = llabs(oddSum - evenSum);
    if (diff % 11 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}