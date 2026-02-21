#include <bits/stdc++.h>
using namespace std;

void pattern4(int n){
    for(int i=0; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main() {
    int printing =  6;
    pattern4(printing);
}