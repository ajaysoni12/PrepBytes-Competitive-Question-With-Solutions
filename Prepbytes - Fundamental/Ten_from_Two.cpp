#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int i = 1;
        while (i <= 10)
        {
            if (n % 10 == 0)
                break;
            n = n * 2;
            i++;
        }
        if (i >= 11)
            cout << -1 << endl;
        else
            cout << i - 1 << endl;
    }
    return 0;
}