#include<iostream>
using namespace std;
int main()
{
	int a, b, c, L;
	cout << "�����������ε�������";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		L = a + b + c;
		cout << "�������ܳ�=" << L << endl;
		if (a == b || a == c || b == c)
			cout << "��������Ϊ����������" << endl;
	}
	else { cout << "���������޷�����������" << endl; }

}