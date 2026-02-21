#include <iostream>
using namespace std;
#include <vector>
void insertion_sort(int arr[], int n){

    for(int i=0; i<n-1; ++i){
        int key =arr[i];
        int j=i-1;

        while(j>=0 && arr[j] >key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
 
    }
}


int main() {

    int n;
    cin>> n;
    int arr[n]; 
    for(int i=0; i<n; i++) cin >> arr[i];
    insertion_sort(arr,n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}

// int largestelement(int arr[], int n){
//     int largest= arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i] >= largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main() {
//     int n ;
//     cin>> n;
//     int arr[n];
//     for(int i=0; i<n;i++)cin>> arr[i];
//    cout <<  largestelement(arr,n);
//     return 0; 
// }