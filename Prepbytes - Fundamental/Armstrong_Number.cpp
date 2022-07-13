#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string str = to_string(n);
        int x = str.size();
        int sum = 0;
        for (int i = n; i != 0; i = i / 10)
        {
            sum += pow(i % 10, x);
        }
        if (sum == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}