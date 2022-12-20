#include<iostream>
using namespace std;
int* f()
{
	int *list=new int [5] ;
	for(int i=0;i<5;i++)
	list[i] = i+1;
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}