#include <iostream> 
using namespace std;

void name1ton(int i, int n){

    if(i>n){
        return ;
    };
    cout << " Your namme is ..." << " " ;
    name1ton(i+1, n );
};
int main() {
    int n; 
    cin>> n;
    name1ton(1,n);
}