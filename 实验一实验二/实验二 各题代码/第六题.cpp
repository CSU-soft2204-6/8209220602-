#include<iostream>
using namespace std;
int main()
{
	int a, b,n,m,j,l;
	cout << "�������������Լ������С������" << endl;
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
	cout << "�������������Լ����:" << m<< endl;
	cout << "������������С�������ǣ�" << j << endl;
	return 0;
}