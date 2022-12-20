#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
int main()
{
	int listSize = 9; int i ;
	double list[10];
	bool changed = true;
	cout << "Enter ten numbers:";
	for (i=0;i<listSize+1;i++)
	{
		cin >> list[i];
	}
	do
	{
		changed = false;
		for (int j = 0; j < listSize; j++)
			if (list[j] > list[j + 1])
			{
				swap( list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "The distinct numbers are:";
	for (i = 0; i < listSize+1; i++)
	{
		cout << list[i] << " ";
	}
	return 0.01;
}