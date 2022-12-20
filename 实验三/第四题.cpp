#include"mytriangle.h"
int main()
{
	double side1,side2,side3;
	cout << "side1=";
	cin >> side1;
	cout << "side2=";
	cin >> side2;
	cout << "side3=";
	cin >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "三角形的面积=" << area(side1, side2, side3) << endl;
	}
	else { cout << "无法计算" << endl; }
	return 0;
}