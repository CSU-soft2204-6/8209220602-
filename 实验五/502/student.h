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
		cout << "����ѧ�ţ�";
		cin >> a;
		num = a;
		cout << "����������";
			cin >> name;
		char c;
		cout << "�����Ա�";
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