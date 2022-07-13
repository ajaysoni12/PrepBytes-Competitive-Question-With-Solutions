#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int mx = 0, mn = 0, n, w, a, sum = 0;
        cin >> n >> w;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            mx = max(mx, sum);
            mn = min(mn, sum);
        }
        w -= mx;
        w += mn;
        cout << max(w + 1, 0) << endl;
    }
    return 0;
}