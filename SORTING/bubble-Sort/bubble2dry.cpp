#include <iostream>
using namespace std;
// void bble(int arr[], int n)
// {
//     for (int i = 0; i <= n - 1; i++)
//     {
//         int didswap = 0;
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 didswap =1;
//             }
//         }
//         if(didswap == 0){
//             break;
//         }
//         cout << " runs";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     bble(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
int sum_larger(int a, int b, int c, int d)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > d && c > a)
    {
        return c;
    }
    else if (d > a && d > b)
    {
        return d;
    }
    else
    {
        cout << " check you given number...";
    }
}
int main()
{
    // int a,b,c,d;
    // cin>> a,b,c,d;
    int a;
    int b;
    int c;
    int d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << " is your greatest number -> " << sum_larger(a, b, c, d);
}