#include<iostream>
using namespace std;
class Time // ���� Time ��
{
public:
	void setTime()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}


private:// ���ݳ�ԱΪ���õ�
    int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;//���� t1 Ϊ Time �����
	t1.setTime();
	t1.showTime();

	return 0;
}