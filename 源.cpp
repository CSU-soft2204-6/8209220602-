#include <iostream>
using namespace std;
//class human {
//public:
//	int know;
//public:
//	void learn() 
//	{
//		know = 0;
//		know++;
//	}
//};
//class student :public human {
//public:
//	void learn() {
//		know = 0;
//		know += 2;
//	}
//};
//int main()
//{
//	int a, b;
//	a + b;
//	student stu1;
//	student stu2;
//	stu1 + stu2;
//	stu.learn();
//	cout << stu.know << endl;
//	system("pause");
//	return 0;
//}
class Complex {
public:
	double real;
	double image;
public:
	Complex()
	{
		real = 0;
		image = 0;
	}
	Complex(double t_real, double t_image)
	{
		this->real = t_real;
		this->image = t_image;
	}
	void display()
	{
		cout << "real=" << this->real << ";image=" << this->image << endl;
	}
	friend Complex operator+(Complex A, Complex B) {
		return Complex(A.real + B.real, A.image + B.image);
	}
	friend Complex operator-(Complex A, Complex B) {
		return Complex(B.real - A.real, B.image - A.image);
	}
	friend Complex operator--(Complex &A) {
		return Complex(-- A.real, A.image);
	}
	friend Complex operator--(Complex& A, int) {
		return Complex(A.real--, A.image);
	}
		
};
int main()
{
	Complex comp1;
	comp1.real = 1.0;
	comp1.image = 1.0;
	comp1.display();
	Complex comp2(2.0,2.0);
	comp2.display();
	Complex comp3=comp1 + comp2;
	comp3.display();
	Complex comp4 = comp1 - comp2;
	comp4.display();
	Complex comp5 = --comp2;
	comp5.display();
	Complex comp6 = comp2--;
	comp6.display();
	system("pause");
}