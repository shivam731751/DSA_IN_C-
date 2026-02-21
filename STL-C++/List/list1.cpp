#include <iostream>
using namespace std;
#include <list>
int main() {
    list<int> l;
    list <int > n(5,100);
    for(int i:n){
        cout <<i << " ";
    }
    cout << endl;
    
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout << i << " ";

    } cout << endl;

    cout << "before erase" << l.size() << endl;
    l.erase(l.begin());
    cout << " after  erase list "<< l.size() << endl;

}
