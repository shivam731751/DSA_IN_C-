#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << " Element at 2nd index" << a.at(2) << endl;
    cout << " Empty or not " << a.empty() << endl;
    cout << "this is your fist element value: " << a.front() << endl;
    cout << " this is your last element value: " << a.back() << endl;
}