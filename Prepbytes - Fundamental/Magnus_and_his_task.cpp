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
        int sum = 0;
        for (int i = n; i >= 1; i = i - 2)
            sum += (i * i);
        cout << sum << endl;
    }
    return 0;
}