//main.cpp
#include<iostream>
#include<string>
#include"student.h"
int main() {
	Student stud;
	stud.set_value();
	stud.display();
	Student stud1("007", "tcg", 'm');
	stud1.display();
	return 0;
}