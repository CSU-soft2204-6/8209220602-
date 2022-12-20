#include<iostream>
using namespace std;
int main()
{
	int a, b,n,m,j,l;
	cout << "求两个数的最大公约数和最小公倍数" << endl;
	cin >> a >> b;
	l = a >= b ? a : b;
	m = a <= b ? a : b;
	while (l % m)
	{
		n = m;
		m = l % m;
		l = m;
	}

	for (j = l;; j++)
	{
		if (j % a == 0 && j % b == 0)
			break;
	}
	cout << "这两个数的最大公约数是:" << m<< endl;
	cout << "这两个数的最小公倍数是：" << j << endl;
	return 0;
}