#include<iostream>
using namespace std;
void swap(int* p, int size)
{
	int temp;
	for(int i=0;i<size;i++)
		for (int j = 0; j < size - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
}
int main()
{
	int size,a;
	
	cout << "输入元素个数";
	cin >> size;
	int* p = new int[size];
	cout << "输入数组";
	for (int i = 0; i < size; i++)
	{
		cin >>*(p+i);
	}
	cout << "输入你想输出的数组";
	cin >> a;
	cout << "p[" << a - 1 << "]=" << p[a - 1] << endl;
	swap(p, size);
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
	delete[] p;
	return 0;
}