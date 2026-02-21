#include <iostream>
using namespace std;

int Second_largNo(int arr[], int n){
    int largest = -1;
    int smallest =n;
    for (int i = 0; i<n; i++){
        if (arr[i] >= largest && arr[i] != largest){
            largest = arr[i];
            
        }
        for(int j=n-2; j>=0; j++){
            if(arr[j] <=smallest )
            smallest =arr[j];
        }
    }

    return largest ;
    cout << smallest << " <=smallest";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << Second_largNo(arr, n) << " ";
}