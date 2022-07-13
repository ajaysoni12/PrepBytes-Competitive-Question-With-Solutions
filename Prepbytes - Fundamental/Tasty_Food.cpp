#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, x;
    cin >> n >> x;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum == 0)
        cout << 0 << endl;
    else
    {
        if (fabs(sum) <= x)
            cout << 1 << endl;
        else
            cout << (int)fabs(sum) / x + 1 << endl;
    }
    return 0;
}