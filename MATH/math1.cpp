#include <bits/stdc++.h>
using namespace std;

void number(int n) {
    // int reversum = 0;
    int count = 0;
    while(n>0){
        int mod = n%10;
        count = count+1;
        cout << mod  << " ";

        n=n/10;
        // reversum = (reversum*10)+mod;
        

        cout << "cout-> " <<  count << endl ;
        // cout << reversum << endl;
        
    }
    cout << endl;
   
};

int main() 
{
int n = 7789;
number(n);
}