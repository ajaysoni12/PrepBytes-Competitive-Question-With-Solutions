#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l == r)
            cout << l << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}