#include <iostream>
using namespace std;

void backtrack(int i, int n){
if(i<1){
    return ;
}
backtrack(i-1, n);
cout << i << " ";
};
int  main(){
    int n;
    cin>> n;
    backtrack(n,n);

}