#include<iostream>
using namespace std;
int main()
{
	int word = 0, space = 0, num = 0, other = 0, n; char  ch;
	cout << "������һ���ַ�" << endl;

	while ((ch = getchar()) && ch != '\n')
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		{
			word++;
		}
		else if (ch == ' ')
		{
			space++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			num++;
		}
		else { other++; }
	cout << "�ܼ���:" << '\n' << word << "����ĸ" << '\n' << space << "���ո�" << num << "������" << other << "�������ַ�" << endl;
	return 0;
}