#include<iostream>
using namespace std;
int indexof(char* s1, char* s2)
{
	bool t = false; int a = 0,b=0;
	for (int i = 0; i < 50; i++)
	{
		if (s1[0] == s2[i])
		{
			for (int j = 0; j < strlen(s1); j++)
			{
				++b;
				if (s1[j] == s2[i + j])
				{
					t = true; a = i + j - strlen(s1)+1;
				}
				else { t = false; }
			}
			if (b == strlen(s1) && t == true)
				break;
		}
	}
	if (t == true)
	{
		return a;
	}
	if(t==false)
	{
		return -1;
	}
}
int main()
{
	char s1[50], s2[50];
	cout << "Enter first string:";
	cin.getline(s1, 50);
	cout << "Enter second string:";
	cin.getline(s2, 50);
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is" << indexof(s1, s2) << endl;
	return 0;
}