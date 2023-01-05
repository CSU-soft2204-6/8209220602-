#include<iostream>
using namespace std;
class Rectangular {
private:
	int length;
	int width;
	int height;
public:
	void setRectangular(){
		int a, b, c;
		cout << "输入长方体的长=";
		cin >> a;
		cout << "输入长方体的宽=";
		cin >> b;
		cout << "输入长方体的高=";
		cin >> c;
		this->length = a;
		this->width = b;
		this->height = c;
	}
	void getRectangular() {
		int V = length * width * height;
		 cout<<"长方体体积="<<V<<endl;
	}
};
int main() {
	Rectangular r1;
	r1.setRectangular();
	r1.getRectangular();
	Rectangular r2;
	r2.setRectangular();
	r2.getRectangular();
	Rectangular r3;
	r3.setRectangular();
	r3.getRectangular();
	system("pause");
	return 0;
}