#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	C = (F - 32) / (18/10);
	cout << "������Ļ����¶���" << F << "��F"<<endl;
	cout << "������Ļ��϶��൱��" <<fixed<<setprecision(2) << C << "��C" << endl;
	return 0;
}

