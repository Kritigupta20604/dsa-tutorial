#include<iostream>
using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//         }
//             cout << "* ";
//     }
// }
// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void print3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// void print4(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<n-i+0;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void print5(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// void print6(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         } 
//         for(int j=0;j<2*i+1;j++){
//             cout << "*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// void print7(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout << " ";
//         } 
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout << "*";
//         }
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     // int t;
//     // cin >> t;
//     // for (int i = 0; i<t;i++){
//     int n;
//     cin >> n;
//     print7(n);
//     }

// int main(){
//     int count(int n){
//         int cnt = 0;
//         while(n>0){
//             int lastdigit = n % 10;
//             cnt = cnt + 1;
//             n = n/10;
//         }
//         return cnt;
// }
// }


// reverse of a num and palindrome
// int main(){
//     int n;
//     cin >> n;
//     int revNum = 0;
//     int dup = n;
//     while(n > 0){
//         int ld = n % 10;
//         revNum = (revNum * 10) + ld;
//         n = n/10;
//     }
//     if(dup == revNum) cout<< "true";
//     else cout << "false";
// }


// armstrong number
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     int dup = n;
//     while(n > 0){
//         int ld = n % 10;
//         sum = sum + (ld*ld*ld);
//         n = n/10;
//     }
//     if (sum == dup) cout << "true";
//     else cout << "false";
// }


// Prime no.
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i*i<=n; i++){
        if(n % i == 0){
            cnt++;
            if((n/i) != i) cnt++;
        }
    }
    if(cnt == 2) cout <<"true";
    else cout<<"false";
}

