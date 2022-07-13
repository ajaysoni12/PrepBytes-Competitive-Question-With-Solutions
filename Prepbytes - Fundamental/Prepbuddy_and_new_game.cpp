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
        long long int a[n];
        for (long long int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long int b[n];
        for (long long int i = 0; i < n; i++)
            b[i] = 0;
        long long int flag = a[0];
        long long int index = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (flag == a[i])
                b[index]++;
            else
            {
                flag = a[i];
                index++;
                b[index]++;
            }
        }
        long long int count = 0;
        for (int i = 0; i < n; i++)
            if (b[i] % 2 != 0)
                count++;
        cout << count << endl;
    }
    return 0;
}