#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        int count = 0;
        while (l <= r)
        {
            count++;
            l = l * 2;
        }
        cout << count << endl;
    }
    return 0;
}