#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        int d1 = fabs(a - b);
        int d2 = fabs(a - c);
        if (d1 < d2)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }
    return 0;
}