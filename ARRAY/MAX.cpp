#include <iostream> 
using namespace std;
int max( int arr[], int n){

    int max = INT16_MIN;
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
}

int max( int arr[], int n){

    
    int min = INT16_MAX;

     for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;

    
}

int main() {
    int n; 
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << " MAX:" << max(arr,n);
    cout << " MIN:" << max(arr,n);
    return 0;
}