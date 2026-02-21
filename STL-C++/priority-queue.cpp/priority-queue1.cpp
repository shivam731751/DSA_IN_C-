#include <iostream>
using namespace std;
#include <queue>

int main()
{
    // max Heap
    priority_queue<int> max;
    // mini Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // max-----------

    max.push(1);
    max.push(3);
    max.push(0);
    max.push(2);
    cout << " Size -> " << max.size() << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    // mini -----------

    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(5);
    mini.push(4);
    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout<< mini.top() <<"  "; // minimum value print
        mini.pop();         // minimum value pop (mean hatna)
    }
    cout << endl;

    cout << " if all value is not present then print 1 erather then 0, mean true or false ->" << max.empty() << endl; 
}
