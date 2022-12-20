#include<iostream>
using namespace std;
void main()
{
	double r, h,V;
	const double pl = 3.1415;
	cout << "ÇëÊäÈëÔ²×¶µ×Ãæ°ë¾¶";
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß";
	cin>> h;
	V =  h * r * r* pl/3;
	cout << "Ô²×¶Ìå»ý=" << V << endl;
	return ;
}