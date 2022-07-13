#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == n)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}