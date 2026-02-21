#include <iostream>
using namespace std;

int LargestElement(int arr[], int n){
    int Largeest_element = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] >= Largeest_element){
             Largeest_element = arr[i];
        }
    }

    return Largeest_element;
}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
   cout << LargestElement(arr, n);
    return 0;

}