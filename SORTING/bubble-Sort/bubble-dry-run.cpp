#include <iostream>
using namespace std;
void bble_short(int arr[], int n){
    // its self try second time the code and dry run in a book then try again the code the code is perfectly run 
    // i'm very happy i think bubble short is 70% clear my mind 

    for(int i=0; i<n-1; i++){      // first the loop is 0,1,2,3,4 time run 
        bool iswap = false;
        for(int j=0; j<n-i-1; j++){  // the loop is run 0,1,2,3,4
            if(arr[j] > arr[j+1]){   // if 0>1 the swap || if 1>2 then swap || if 2>3 then swap
                swap(arr[j], arr[j+1]);
                iswap = true;
            }
        }
        if(!iswap){ //Array is Aleady sorted
            return;
        }
    }
}

void printarr(int arr[], int n ){   // shorted Array is here 
    for(int i=0; i<n; i++){         // one-by-one is loop throght Array print on a screen 
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {

    int n = 5;   // Number of loop running 
    int arr[n] = {14,11,12,0,13};  // Unshorted Array 
    bble_short(arr, n);  // call by value || bble_short function call 
    printarr(arr, n);    // Array call for printing shorted Array 
    return 0;            // return type 
}