#include  <iostream>
using namespace std;
#include <stack>
int main() {

    stack<string>s;
    s.push("Shivam");
    s.push("vs");
    s.push("Dev");
    // ==========================

    // ==========================
    s.pop();

    cout << "Top String/ Element -> " << s.top() << endl;

    cout << " check what the element size is: " << s.size() << endl;
 }