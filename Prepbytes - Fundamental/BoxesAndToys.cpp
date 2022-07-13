#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (y - x >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}