#include <iostream>
using namespace std;

int f(int number,int arr[]){
int count =0;
int n;
cin >> n;
for(int i=0; i<n; i++){
    if(arr[i] == number){
        count = count +1;
    }
 }
}
int main(){
  int arr[]={2,3,1,4,5};
  int number;
  cin>> number;
  f(number,arr);

}