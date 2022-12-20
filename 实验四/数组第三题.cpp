#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for(int i=0;i<100;i++)
	{
		a[i] = true;
	}
	for (int j = 2; j < 100; j++)
	{
		for (int k = 0; k < 100; k++)
		{
			if(k-j+1>=0)
			if ((k-j+1) % j == 0)
			{
				if (a[k] == true)
				{
					a[k] = false;
				}
				else { a[k] = true; }
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		if (a[i])
		{
			cout << "L" << i+1 << " ";
		}
	}
	return 0;
}