#include<iostream>
using namespace std;
int parseHex(char* hexString)
{
	int sum = 0;
	for (int i = 0; i < strlen(hexString); i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			hexString[i] = hexString[i]- 'A' + 10;
		}
		else { hexString[i] -= '0'; }
	}
	for (int i = 0; i < strlen(hexString); i++)
	{
		sum += hexString[i] * pow(16, strlen(hexString) - i-1);
	}
	return sum;
}
int main()
{
	char hexString[50];
	cout << "Enter hex:";
	cin.getline(hexString, 50);
	cout << "Dec:" << parseHex(hexString) << endl;
	return 0;
}