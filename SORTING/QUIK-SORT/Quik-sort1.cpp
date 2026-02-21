#include <iostream>
using namespace std;
void quik( int arr[], int n){

     for(int i=0; i<n; i++){
         if(arr[i] >= arr[i+1]){
             swap(arr[i+1], arr[i]);
            }
            cout << arr[i] << " ";
            
        for(int j=n; j>=0; j--){
               cout << arr[j] << " ";
               if(arr[i]){};
               
           }
    }


}

int main() {
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)  cin >> arr[i];
    quik(arr,n);
    return 0; 
    

}