 ///
 /// @file    initialize_expression.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 22:39:20
 ///
 
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

class point
{
	public:
		point(int x)   //初始化表取决于成员声明的顺序
		:_xPos (x)
		 ,_yPos (_xPos)  
		{
		}
		void print ()
		{
			cout << "_xPos: " << _xPos << ",_yPos: " << _yPos << endl;
		}
	private:
		int _yPos;  //先定义
		int _xPos;  //后定义
	//	int _xPos;
	//	int _yPos;
};

int main()
{
	point pt1 (3);
	pt1.print ();
	return 0;
}
