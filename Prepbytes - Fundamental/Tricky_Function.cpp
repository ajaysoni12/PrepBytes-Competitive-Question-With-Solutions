#include <iostream>
using namespace std;
int solve(long long int n)
{
	if (n == 0 || n == 1)
		return n;
	return n % 2 == 0 ? solve(n / 2) : solve(n - 1) + 1;
}
int main()
{
	long t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		cout << solve(n)<<endl;
	}
	return 0;
}