#include<iostream>
using namespace std;
int main()
{
	double  c,d=0,n=0;
	const double b = 2, a = 0.8;
	for (c = 2; c <= 100; c = c * b)
	{
		d += (c * a);
		n++;
	}
	cout << "ÿ��ƽ����" << d/n << "Ԫ" << endl;
}