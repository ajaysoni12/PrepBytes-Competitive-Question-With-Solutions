#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    long long int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        long long int length = str.size();
        long long int count = 0, flag = 0;
        for (int i = 0; i < length; i++)
            if (str[i] == 'U')
                count++;
            else
                flag++;
        cout << length / 2 - min(count, flag) << endl;
    }
    return 0;
}