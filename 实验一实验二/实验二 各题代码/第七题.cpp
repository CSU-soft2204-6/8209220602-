#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	for(i=1;i<6;i++)
	{
		for (j = 6; j>1; j--)
		{
			if (j - i <= 1)
			{
				cout << '*';
			}
			else cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}