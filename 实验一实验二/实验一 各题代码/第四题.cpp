#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//八进制
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//short类型储存值范围为-2^15-2^15-1testUnint超过范围
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	system("pause");
	return 0;
}