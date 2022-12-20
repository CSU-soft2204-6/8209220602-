#include<iostream>
using namespace std;
int main()
{
	double a,b,d=0,e=1;
	const double c = 1e-5;
	cout << "请输入a"<<endl;
	cin >> a;
	b = a;
	if (a >= 0)
	{
		while (fabs(e) >= c)
		{
			d = (b + a / b) / 2;
			e = b - d;
			b = d;
		}
			cout << "x=" << d << endl;
		
	}
	else cout << "无法计算" << endl;
	return 0;
}