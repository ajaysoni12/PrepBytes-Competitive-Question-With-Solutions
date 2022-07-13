#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    string str = to_string(n);
    long long int count = str.size();
    long long int totalStunningNumber = 0;
    long long int mul;
    if (count == 1)
        mul = 10;
    else if (count == 2)
        mul = 100;
    else if (count == 3)
        mul = 1000;
    else if (count == 4)
        mul = 10000;
    else if (count == 5)
        mul = 100000;
    else if (count == 6)
        mul = 1000000;
    else if (count == 7)
        mul = 10000000;
    else if (count == 8)
        mul = 100000000;
    else if (count == 9)
        mul = 1000000000;
    else
        mul = 0;

    while (n <= m)
    {
        totalStunningNumber++;
        n += mul;
    }
    cout << totalStunningNumber << endl;
    return 0;
}