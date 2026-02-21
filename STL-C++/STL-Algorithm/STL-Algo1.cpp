#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(0);
    cout << " Finding 6 ->  " << binary_search(v.begin(),v.end(),5) << endl;
    cout << " Next " << endl;
    cout << "Finding ... Lower Bound ->  "<<lower_bound(v.begin(), v.end(), 5)-v.begin() << endl;
    cout << "Finding ... upper Bound ->  "<<upper_bound(v.begin(), v.end(), 2)-v.begin() << endl;

    int a =20;
    int b =10;
    cout << " MIN-> " << min(a,b) << endl;
    cout << " MAX-> " << max(a,b) << endl;
    cout << " SWAPING... -> ";
    swap(a,b);
    cout << "SWAPED a -> "  << a  << " SWAPED b-> " << b << endl;
    // ======== rever value or string  ================
    string shi = " mavihs";
    reverse(shi.begin(), shi.end());
    cout << " Reversed string ->" << shi << endl;

    // ============ Rotate ====================

    rotate(v.begin() , v.begin()+1,v.end());
    cout << " After Rotate " << endl;
    for(int i:v){
        cout << i<< " ";
        
    }
     
}