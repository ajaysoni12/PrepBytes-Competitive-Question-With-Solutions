#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << (n * n * n - n) / 6 << endl;
    }
    return 0;
}