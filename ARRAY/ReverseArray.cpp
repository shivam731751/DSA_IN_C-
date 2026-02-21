#include <iostream>
using namespace std;
void Reverse(int arr[], int n){

   int start = 0;
   int end  = n-1;
   while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;

   }
    cout << arr[start];
}

int main() {
    // Reverse An Array
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 
    Reverse(arr,n) ;

}

