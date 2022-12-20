

#include <iostream>
using namespace std;
int main()
{
	int i,j,k=0,a[10];
	cout << " Enter ten numbers :";
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << " The distinct numbers are:";
	for (i = 0; i < 9; i++)
		{
		    bool c = true;
		    for(j=i+1;j<9;j++)
			{
				if (a[i] == a[j])
					c = false;
			}
			if(c)
			cout << a[i] << " ";
		}
	if (a[8] != a[9])
	{
		cout << a[9] << endl;
	}
	return 0;
	}
	
	

