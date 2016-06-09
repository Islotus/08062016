 ///
 /// @file    constructor.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 18:18:52
 ///
 
#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;

class point
{
public:
	point ( int x, int y )  //有参构造函数
	{
		cout << "对象创建时构造函数被自动调用" << endl;
		_xPos = x;
		_yPos = y;
	}
	void print ()
	{
		cout << "xPos: " << _xPos << ", yPos: " << _yPos << endl;
	}
private:  //私有成员
	int _xPos;
	int _yPos;
};

int main()
{
	// point pt0 ();
	// pt0.print ();
	point pt1 (3,4);  //调用有参构造函数声明point类变量（类对象）pt1
	pt1.print ();
	return 0;
}
