 ///
 /// @file    constructor_default_parameter.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 22:21:31
 ///
 
#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;

class point
{
	public:
		point (int x = 0, int y = 0) //有参构造函数
		{
			cout << "对象创建时构造函数自动调用" << endl;
			_xPos = x;
			_yPos = y;
		}
		void print ()
		{
			cout << "xPos: " << _xPos << ",yPos: " << _yPos << endl;
		}
	private:
		int _xPos;
		int _yPos;
};

int main()
{
	point pt0;
	pt0.print ();
	point pt1 (3, 4);
	pt1.print ();
	return 0;
}

