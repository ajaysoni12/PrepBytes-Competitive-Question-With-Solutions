#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int totalEnergy = 0;
    int i = 1;
    int a = min(x, y);
    int b = max(x, y);
    while (a < b)
    {
        if (a + 1 == b)
        {
            totalEnergy += i;
            break;
        }
        else
        {
            totalEnergy += i + i;
        }
        a++;
        b--;
        i++;
    }
    cout << totalEnergy << endl;
    return 0;
}