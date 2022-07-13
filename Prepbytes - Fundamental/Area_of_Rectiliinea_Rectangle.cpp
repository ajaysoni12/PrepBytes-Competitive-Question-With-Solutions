#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;

        unsigned long long int areaABCD = abs((d - b) * (c - a));
        unsigned long long int areaEFGH = abs((h - f) * (g - e));

        int x_overlap = min(c, g) > max(a, e);
        int y_overlap = min(d, h) > max(b, f);

        unsigned long long areaOverlap = 0;

        if (x_overlap && y_overlap)
            areaOverlap = abs((min(c, g) - max(a, e)) * (min(d, h) - max(b, f)));
        cout << areaABCD + areaEFGH - areaOverlap << endl;
    }
    return 0;
}