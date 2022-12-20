#include<iostream>
using namespace std;
int main()
{
	int a, b, c, L;
	cout << "请输入三角形的三条边";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		L = a + b + c;
		cout << "三角形周长=" << L << endl;
		if (a == b || a == c || b == c)
			cout << "该三角形为等腰三角形" << endl;
	}
	else { cout << "这三条便无法构成三角形" << endl; }

}