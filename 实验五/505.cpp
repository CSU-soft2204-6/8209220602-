#include<iostream>
#include<string>
#include<vector>
using namespace std;
void intersection(vector<string>& v1, vector<string>& v2) {
	bool t = false;
	vector<string>v3;
	for (vector<string>::iterator it1 = v1.begin(); it1 != v1.end(); it1++) {
		for (vector<string>::iterator it2 = v2.begin(); it2 != v2.end(); it2++) {
			if (*it1 == *it2) {
				v3.push_back(*it1);
				t = true;
			}
		}
	}
	if (t == false) {
		cout << "û����ͬԪ��" << endl;
	}
	if (t == true) {
		cout << " ��ͬԪ��Ϊ��" ;
		for (vector<string>::iterator it3 = v3.begin(); it3 != v3.end(); it3++) {
			cout << *it3 << "  ";
		}
	}
}
int main() {
	vector<string>v1, v2;
	cout << "�������һ������������ַ���" << endl;
	for (int i = 0; i < 5; i++) {
		string a;
		cout << "�����" << i + 1 << "��Ԫ��:";
		cin >> a;
		v1.push_back(a);
	}
	cout << "������ڶ�������������ַ���" << endl;
	for (int i = 0; i < 5; i++) {
		string b;
		cout << "�����" << i + 1 << "��Ԫ��:";
		cin >> b;
		v2.push_back(b);
	}
	intersection(v1, v2);
	 system("pause");
	 return 0;
}