#include <bits/stdc++.h>
using namespace std;
long long int min(long long int a, long long int b)
{
    if (a < b)
        return a;
    return b;
}
int main()
{
    // write your code here
    int t;
    long long int m, r1, r2, r3, count;
    cin >> t;
    while (t--)
    {
        cin >> count >> r1 >> r2 >> r3;
        count = count % 4;

        if (count == 0)
        {
            cout << "0";
        }
        if (count == 1)
        {
            cout << min(r3, min(r1 + r2, r1 + r1 + r1));
        }
        if (count == 2)
        {
            cout << min(r2, min(r1 + r1, r3 + r3));
        }
        if (count == 3)
        {
            cout << min(r1, min(r2 + r3, r3 + r3 + r3));
        }
        cout << endl;
    }

    return 0;
}