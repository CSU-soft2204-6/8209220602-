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
	cout << "第一天共摘" << fac(n) << "个桃子" << endl;
	return 0;
}