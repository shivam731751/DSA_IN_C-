#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// =================----- when a function calls itself until a specified condition is met .---------------============= 
void f(){

    cout << 1 << " ";
    
    f();
}
int main() {
f();
}