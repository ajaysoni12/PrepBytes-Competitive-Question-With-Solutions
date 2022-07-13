#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    long long int x, y;
    cin >> x >> y;
    long long int count = 0;
    while (x <= y)
    {
        x = x * 2;
        count++;
    }
    cout << count << endl;
    return 0;
}