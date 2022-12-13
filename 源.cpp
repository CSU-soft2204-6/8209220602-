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
	Complex *pc = this;
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
		pc = this;
	}
	void display()
	{
		cout << "real=" << this->real << ";image=" << this->image << endl;
	}
	Complex operator+(Complex B) {
		return Complex(this->real + B.real, this->image);
	}
	Complex operator-(Complex B) {
		return Complex(this->real - B.real, this->image);
	}

	Complex operator--() {
		return Complex(--this->real , this->image);
	}
	Complex operator--(int) {
		return Complex(this->real--, this->image);
	}
	Complex operator ++ ();
	Complex operator = (Complex B);
	//friend Complex operator+(Complex A, Complex B) {
		/*return Complex(A.real + B.real, A.image + B.image);
	}
	friend Complex operator-(Complex A, Complex B) {
		return Complex(B.real - A.real, B.image - A.image);
	}*/
	Complex *operator->()
	{
		if (pc != NULL) {
			return pc;
		}
		static Complex s_complex;
		return &s_complex;
	}
};
Complex Complex::operator ++() {
	return Complex(++real, image);
}
Complex Complex::operator =(Complex B)	      
{
    real = B.real, image = B.image;
	cout << "operator = calling..." << endl;
	return *this;                                                        
}

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
	Complex comp7 = ++comp2;
	comp7.display();
	Complex comp8 = comp2;
	comp8.display();
	comp1.pc->display();
	//delete comp1.pc;
	comp1.pc = NULL;
	comp1->display();
	system("pause");
}