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
        while (1)
        {
            if (n == 1)
            {
                cout << n << " ";
                break;
            }
            else if (n % 2 == 0)
            {
                cout << n << " ";
                n = pow(n, 0.5);
            }
            else
            {
                cout << n << " ";
                n = pow(n, 1.5);
            }
        }
    }
    return 0;
}