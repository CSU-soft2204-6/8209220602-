#include<iostream>
using namespace std;
void merge( int list1[], int size1,  int list2[], int size2, int *list3,int size3)
{
	int  temp;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for(int i=0;i<size2;i++)
	{
		list3[i + size1 ] = list2[i];
	}
	for(int i = 0; i < size3;i++)
	{
		for (int j = 0;j<size3-1;j++)
		{
			if(list3[j]>list3[j+1])
			{
				temp = list3[j];
				list3[j] = list3[j+1];
				list3[j+1] = temp;
			}
		}
		
	}
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int *list3, list1[80], list2[80], size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	for(int i=0;i<size1;i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int size3 = size1 + size2;
	list3 = new int [size3];
	
	 merge( list1,  size1,  list2,  size2, list3,size3);

	delete[] list3;
	return 0;
}