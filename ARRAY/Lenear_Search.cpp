#include <iostream> 
using namespace std;

bool Lenear_srch(int arr[], int n ,int key){

    for(int i=0; i<n; i++){

        if(arr[i] == key){
            return 1;        
        }
    }
    return 0;
}
                            //========================================= not completed problem solve next day ============================================//
int main(){

    int n =10;
    int arr[n]={1,5,32,5,24,5,3,65,-1,1};
    int key;
    cout << "Enter a Key to Find number" << endl;
    cin >> key;
    int found = Lenear_srch(arr,n,key) ;
    if(found){
        cout << "yes present";
    }else {
        cout << " Not Preset";
    }

    return 0;
}
