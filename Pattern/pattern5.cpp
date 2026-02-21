#include <bits/stdc++.h>
using namespace std;
void ptr5(int n)

{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void ptr6(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptr7(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int printing = 5;
    ptr5(printing);
    // ptr6(printing);
    // ptr7(printing);
   
}