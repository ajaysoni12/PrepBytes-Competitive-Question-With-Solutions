#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        int count = 3;
        cout << x << " " << y << " " << z << " ";
        while (count < n)
        {
            int temp = z;
            z = x + y + temp;
            x = y;
            y = temp;
            cout << z << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}