#include <iostream> 
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout << i << " " ;
    } cout<< endl;
    // ============================
    // d.pop_front();
    // cout << " poped value printed " ;
    //  for(int i:d){
    //     cout << i << " " ;
    // }
// ================================

cout << " Fornt: " << d.front() << endl;
cout << "back: " << d.back() << endl;

cout << " Print second Index Element->" << d.at(1) << endl;
cout << "Check empety or not : " << d.empty() << endl;

// =============================

cout << "befor erase" << d.size() << endl;

d.erase(d.begin(), d.begin()+1);
cout << "after erase " << d.size() << endl;
for(int i:d){
    cout << i << " " ;

} cout << endl;

}