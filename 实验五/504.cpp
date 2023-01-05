#include<iostream>
#include<math.h>
using namespace std;
class Shape {
public:
	virtual double area() = 0;
	virtual void display() = 0;
};
class Circle :public Shape {
private:
	double m_r;
public:
	Circle(double r) {
		this->m_r = r;
	}
	virtual double area() {
		return 3.14 * m_r * m_r;
	}
	void display() {
		cout << "圆的面积=" << this->area()<<endl;
	}
};
class Square :public Shape {
private:
	double m_a;
public:
	Square(double a) {
		this->m_a = a;
	}
	virtual double area() {
		return  m_a * m_a;
	}
	void display() {
		cout << "正方形的面积=" << this->area()<<endl;
	}

};
class Rectangle:public Shape {
private:
	double m_a;
	double m_b;
public:
	Rectangle(double a, double b) {
		this->m_a = a;
		this->m_b = b;
	}
	virtual double area() {
		return  m_a * m_b;
	}
	void display() {
		cout << "长方形的面积=" << this->area() << endl;
	}

};
class Trapezoid :public Shape {
private:
	double m_a;
	double m_b;
	double m_h;
public:
	Trapezoid(double a, double b, double h) {
		this->m_a = a;
		this->m_b = b;
		this->m_h = h;
	}
	virtual double area() {
		return  (m_a + m_b)*m_h/2;
	}
	void display() {
		cout << "梯形的面积=" << this->area() << endl;
	}

};
class Triangle :public Shape {
private:
	double m_a;
	double m_b;
	double m_c;
public:
	Triangle(double a, double b, double c) {
		this->m_a = a;
		this->m_b = b;
		this->m_c = c;
	}
	virtual double area() {
		double p = (m_a + m_b + m_c) / 2;
		return  sqrt(p*(p-m_a)*(p-m_b)*(p-m_c)) ;
	}
	void display() {
		cout << "三角形的面积=" << this->area() << endl;
	}


};
int main() {
	Circle circle(10.3);
	circle.area();
	circle.display();
	Square square(3);
	square.area();
	square.display();
	Rectangle rectangle(3,4);
	rectangle.area();
	rectangle.display();
	Trapezoid trapezoid(2.0,4.5,3);
	trapezoid.area();
	trapezoid.display();
	Triangle triangle(4,5,6);
	triangle.area();
	triangle.display();
	cout << "各图形面积的和="<<circle.area() + square.area()+ rectangle.area() + trapezoid.area()  + triangle.area() << endl;
	system("pause");
	return 0;
}