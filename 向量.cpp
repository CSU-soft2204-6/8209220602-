#include<iostream>
#include<vector>
#include<map>;
#include<queue>;
using namespace std;






int main() {

	queue<double>scorequeue;
	vector<double>scorevector;
	map<int, double>score_map;

	score_map.emplace(3, 90.0);
	cout<<"学号3的学生成绩为" << score_map[3];



	scorequeue.push(3.0);



	//scorevctor.push_back(3.0);
	int size_n;
	cin >> size_n;

	for (int i = 0; i < size_n; i++) {
		int t;
		cin >> t;
		scorevector.push_back(t);
		cout << "向量大小：" << scorevector.size() << endl;
		cout << "向量容量：" << scorevector.capacity() << endl;
	}
	for (int i = 0; i < scorevector.size(); i++) {
		cout << "元素" << i << "值为" << scorevector[i] << endl;
	}
	int i = 0;
	vector<double>::iterator vector_it;
	for (vector_it = scorevector.begin(); vector_it != scorevector.end();vector_it++) {
		cout << "元素" << i << "值为" << *vector_it << endl;
		i++;
		
		
	}
	while (!scorevector.empty()) {
		double t = scorevector.back();
		scorevector.pop_back();
		cout << "弹出元素" << t << endl;
		cout << "向量大小：" << scorevector.size() << endl;
		cout << "向量容量：" << scorevector.capacity() << endl;
	}
}