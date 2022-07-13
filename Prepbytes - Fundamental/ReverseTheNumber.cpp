#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (; x != 0; x /= 10)
    {
        cout << x % 10;
    }
    return 0;
}