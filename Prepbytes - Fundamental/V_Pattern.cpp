#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    char ch;
    cin >> ch;
    for (int i = 1; i <= 5; i++)
    {
        int count = 1;
        for (int j = 1; j <= 10; j++)
        {
            if (i >= j || 11 - i <= j)
            {
                if (j <= 5)
                    cout << count++;
                else
                    cout << --count;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}