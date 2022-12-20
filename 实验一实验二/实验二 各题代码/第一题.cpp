#include<iostream>
using namespace std;
int main()
{
	char word;
	cin >> word;
	if (word >= 'A' && word <= 'Z')
		cout << word << endl;
	else cout << word + 'A' - 'a' << endl;
	
	system("pause");
	return 0;
}