#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			break;
		}
	}
	if (i == num)
	{
		return true;
	}
	else { return false; }
}
int main()
{
	int b,c=0;
	for (b = 2; b <= 200; b++)
	{
		if (is_prime(b))
		{
			cout << b << " "; c += 1;
		}
		if (c == 10)
		{
			cout << endl; c = c - 10;
		}
	}
	return 0;
}