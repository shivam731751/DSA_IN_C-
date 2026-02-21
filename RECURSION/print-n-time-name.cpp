#include <iostream>
using namespace std;

void Ntimename(int i, int n)
{

    if (i > n)
    {
        return;
    }
    cout << "Dev Shukla " << " " << endl;
    Ntimename(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    Ntimename(1, n);
}

// ============= {the time complexity is 0(n)} <=> {and also space complexity is 0(n)} ===================//