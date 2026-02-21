#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void f(){
    int count = 0;
    if (count == 4){
        return;
        
        cout << count << " ";
    }
    count++;
    f();
}
int main(){
    f();
}