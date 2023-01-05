#include <iostream>
using namespace std;
int main() {
	shared_ptr<int>a(new int);
	*a = 10;
	cout << a.use_count() << endl;
	shared_ptr<int>b;
	b = a;
	cout << a.use_count() << endl;
	//auto b = a;
	//delete a;
	a.reset();
	cout << b.use_count() << endl;
	cout << *b << endl;
}