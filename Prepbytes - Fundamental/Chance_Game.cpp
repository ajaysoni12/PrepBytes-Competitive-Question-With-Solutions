#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, s1, s2;
        cin >> p >> s1 >> s2;
        int ans = 0;
        int d = max(s1, s2);
        int e = min(s1, s2);
        if (d < p)
        {
            ans = p - d;
            d = p;
        }
        if (d - e < 2)
        {
            ans = ans + (e + 2 - d);
        }
        cout << ans << endl;
    }
    return 0;
}