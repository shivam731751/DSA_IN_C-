#include <bits/stdc++.h>
using namespace std;
void palin(int n)
{
    int duplicate = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
          cout << lastdigit;

        if (sum == n)
        {
            cout << lastdigit << " this is the armstro" << endl;
        }
    }
}

int main()
{

    int x = 9877;
    palin(x);
}
