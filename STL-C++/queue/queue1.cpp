#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<string> q;

    q.push("Shivam");
    q.push("VS");
    q.push("Dev");

    cout << " befor pop ->" << q.size() << endl;
    cout << " first element " << q.front() << endl;
    q.pop() ;
    cout << " After pop -> fist element -> " <<q.front() << endl;
    cout << "Check what the size of element -> " << q.size() << endl;

}