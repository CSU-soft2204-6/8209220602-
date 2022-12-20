#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x的值"<<endl;
	cin >> x;
	if (x > 0)
	{
		if (x >= 1)
		{
			if (x >= 5)
			{
				y = x * x; cout << "y=" << y << endl;
			}
			else { y = 2 / 4 * x + 1;  cout << "y=" << y << endl;
			}
		}
		else { y = 3 - 2 * x;  cout << "y=" << y << endl;
		}
	}
	else cout << "输入的x不在定义域内" << endl;
	return 0;
		}