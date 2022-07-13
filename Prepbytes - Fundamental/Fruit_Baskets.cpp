#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        int count = 0;
        while ((a[0] != 0 && a[1] != 0) || (a[0] != 0 && a[2] != 0) || (a[1] != 0 && a[2] != 0))
        {
            int x, y, z;
            x = max(a[0], max(a[1], a[2]));
            z = min(a[0], min(a[1], a[2]));
            y = (a[0] + a[1] + a[2]) - (x + z);
            a[0] = x;
            a[1] = y;
            a[2] = z;
            a[0]--;
            a[1]--;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}