#include<iostream>
using namespace std;
int fac(int n)
{
	int t;
	if (n == 1)
	{
		t = 1;
	}
	else {
		t = ((fac(n - 1) + 1) * 2);
	}
	return t;
}
int main()
{
	int n = 10;
	cout << "��һ�칲ժ" << fac(n) << "������" << endl;
	return 0;
}