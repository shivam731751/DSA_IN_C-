#include <bits/stdc++.h>
using namespace std;
void explainvectore()
{

    vector<int> a(5, 1);
    cout << "print a " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // ===============================
    cout << " copy the a value in last name type var: ";
    vector<int> last(a);
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << " end cpy value" << endl;
    vector<int> v;
    v.push_back(1);
    cout << "Capacity=>" << v.capacity() << endl;
    v.emplace_back(2);
    cout << "Capacity=>" << v.capacity() << endl;
    // vector<pair<int, int>> vec;
    // cout << v[1];
    v.push_back(3);
    cout << "Capacity=>" << v.capacity() << endl;
    cout << " size => " << v.size() << endl;
    cout << " before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "with Pop " << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " before clear :" << v.size() << endl;
    v.clear();
    cout << " After clear :" << v.size() << endl;
}
int main()
{
    explainvectore();
}