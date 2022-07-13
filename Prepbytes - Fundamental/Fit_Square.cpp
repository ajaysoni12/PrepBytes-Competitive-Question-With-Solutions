#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int mul = m * n;
        int divide = mul / 2;
        if (m == 1 && n == 1)
            cout << 0 << endl;
        else
            cout << divide << endl;
    }
    return 0;
}