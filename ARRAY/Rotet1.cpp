#include <iostream> 
#include <vector> 
using namespace std;
int rotate ( int arr[], int n){

    int temp = arr[0];
    for(int i=0; i<n; i++){
        arr[i-1] = arr[i];
    }
    int result= arr[n-1] = temp;
    return arr[result];

}

int main() {

    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i=0; i<n; i++) cin >>  arr[i];
    cout <<  rotate (arr, n); 

    // for(int i=0; i<n; i++) cout <<  arr[i] << " ";
    return 0; 
}

