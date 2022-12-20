#include<iostream>
using namespace std;
int main()//主函数main不能大写
{
	int k = 0;
	int i = k + 1;//没有定义k
	cout << i++ << endl;
	int m = 1;//i被多次定义,将其改为m
	cout << m++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;//结尾没有分号
}