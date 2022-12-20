#include<iostream>
using namespace std;
void count(char s[],int counts[])
{
	int num = 26;
	for (int i = 0; i < num; i++)
	{
		counts[i] = 0;
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i] = s[i] + 'a' - 'A';
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			counts[s[i] - 'a']++;
		}

	}
	for (int i = 0; i < num; i++)
	{
		if (counts[i] > 0)
		{
			cout << (char)('a' + i) << ":" << counts[i] << " " << "times" << endl;
		}
	}
}
int main()
{
	char s[50]; int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 50);
	count(s, counts);
	return 0;
}