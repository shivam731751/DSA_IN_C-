#include <iostream>
using namespace std;

int f(int no, int arr[])
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == no)
        {
            return count = count + 1;
        }
    }
}

int main()
{

    int arr[] = {1, 3, 1, 5, 6};
    int n = 10;
    cout << f(3, arr);
}