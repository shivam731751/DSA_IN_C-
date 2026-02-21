#include <iostream>
using namespace std;
int search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x) return i;
    }
    return -1;

}

int main() {
    int n = 8;
    int x;
    cout << "Enter a number you want to find:  ";
    cin>> x;
    int arr[] = {10,2,12,34,11,22,33,35};
    int result = search(arr, n , x);

   if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
        return 0;

}