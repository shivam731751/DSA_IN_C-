#include <iostream> 
using namespace std;
int SumArray(int arr[], int n ){

    int sumArray=0;
    for(int i=0; i<n; i++){ 
       sumArray = sumArray += arr[i];
    }
    return sumArray;
}

int main() {
    int n; 
    cin >> n; 
     int arr[n]; 
     for(int i=0; i<n; i++)cin >> arr[i]; 
    cout <<  SumArray(arr,n) << " "; 
     return 0; 
 
}
