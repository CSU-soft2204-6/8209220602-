#include<iostream>
using namespace std;
int main()
{
	int word = 0, space = 0, num = 0, other = 0, n; char  ch;
	cout << "请输入一串字符" << endl;

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
	cout << "总计有:" << '\n' << word << "个字母" << '\n' << space << "个空格" << num << "个数字" << other << "个其他字符" << endl;
	return 0;
}