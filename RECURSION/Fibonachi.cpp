#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int fib(int n){
//     if(n == 0){
//         return 0;
//     };
//     if(n==1){
//         return 1;
//     };

//     int ans = fib(n-1) + fib(n-2);
//     return ans;

// }

int main() {
    // int n; 
    // cin >> n;
    // cout << fib(n);

   int n; 
    cin >> n;
    int count = 0; 
   for(int i=0; i<n; i++){
    count = count + n+i;
   }
   cout << count << "  ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;


}
