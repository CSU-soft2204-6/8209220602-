#include<iostream>
using namespace std;
int main()
{
	int a, b; char c;
	cout << "�������㷨������" << endl;
	cin >> a, c, b;
	switch (c)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':if (b != 0) {
		cout << a << "/" << b << "=" << a / b << endl; break;
	}
			else { cout << "��������Ϊ��" << endl; break; }
	case '%':if (b != 0) {
		cout << a << "%" << b << "=" << a % b << endl; break;
	}
			else { cout << "��������Ϊ��" << endl; break; }
	default:cout << "�޷����м���" << endl; break;
	}
	return 0;
}