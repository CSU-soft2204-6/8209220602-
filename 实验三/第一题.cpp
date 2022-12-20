#include<iostream>
using namespace std;


	int max(int a, int b) 
	{
		int x = (a > b ? b : a);
		int z = 0;
		for (int i = x - 1; i > 0; i--) {
			if (a % i == 0 && b % i == 0) {
				z = i;
				break;
			}
		}
		return z;
	}
int min(int a, int b)
{
	int i;
	for (i = 1;; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			break;
		}
	}
	return (i);
}
int main()
{
	int m, n, j, k;
	cin >> n >> m;
	j = max(m, n);
	k = min(m, n);
	cout << "m,n的最大公约数=" << j << endl;
	cout << "m,n的最小公倍数=" << k << endl;
	return 0;
}