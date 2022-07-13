#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 10)
            {
                if (a[i] % 2 == 0)
                    sum += a[i] / 2;
                else
                    sum += a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}