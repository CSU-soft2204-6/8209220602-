#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	C = (F - 32) / (18/10);
	cout << "您输入的华氏温度是" << F << "°F"<<endl;
	cout << "您输入的华氏度相当于" <<fixed<<setprecision(2) << C << "°C" << endl;
	return 0;
}

