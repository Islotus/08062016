 ///
 /// @file    overloaded_constructor.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 18:33:01
 ///
 
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

class point 
{
	public:
		point ( int x, int y )  //有参构造函数
		{
			cout << "有参构造函数的调用" << endl;
			_xPos = x;
			_yPos = y;
		}
		point ()
		{
			cout << "无参构造函数的调用" << endl;
			_xPos = 0;
			_yPos = 0;
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
	point pt1 (3,4);
	pt1.print ();
	point pt2;
	pt2.print ();
	return 0;
		
}
