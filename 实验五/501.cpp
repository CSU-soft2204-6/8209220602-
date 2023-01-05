#include<iostream>
using namespace std;
class Time // 定义 Time 类
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


private:// 数据成员为公用的
    int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;//定义 t1 为 Time 类对象
	t1.setTime();
	t1.showTime();

	return 0;
}