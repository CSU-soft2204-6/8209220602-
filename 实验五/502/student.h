//student.h
#include<iostream>
using namespace std;
class Student
{
public:
	void display();
private:
	string num;
    string name;
	char sex;
public:
	void set_value() {
		string a;
		cout << "输入学号：";
		cin >> a;
		num = a;
		cout << "输入姓名：";
			cin >> name;
		char c;
		cout << "输入性别：";
		cin >> c;
		sex = c;
	}
	Student() {
		this->num = num;
		this->name = name;
		this->sex = sex;

	}
	Student(string a, string b, char c) {
		num = a;
		name = b;
		sex = c;
	}
};