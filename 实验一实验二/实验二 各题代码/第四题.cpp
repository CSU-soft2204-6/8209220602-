#include<iostream>
using namespace std;
int main()
{
	int a, b; char c;
	cout << "请输入算法和数据" << endl;
	cin >> a, c, b;
	switch (c)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':if (b != 0) {
		cout << a << "/" << b << "=" << a / b << endl; break;
	}
			else { cout << "除数不能为零" << endl; break; }
	case '%':if (b != 0) {
		cout << a << "%" << b << "=" << a % b << endl; break;
	}
			else { cout << "除数不能为零" << endl; break; }
	default:cout << "无法进行计算" << endl; break;
	}
	return 0;
}