 ///
 /// @file    area_of_rectangle.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 08:16:24
 ///


//用面向对象的方法求矩形的面积
//首先定义一个矩形类，然后矩形有长、宽属性，有求面积的方法等

#include <iostream>
using namespace std;

class CRectangle
{
public:
	CRectangle(float l = 0.0f, float w = 0.0f)
	{
		this -> length = l;
		this -> width = w;
	}
	float area()
	{
		return this -> length * this -> width;
	}
	//...
private:
	float length;
	float width;
};

int main()
{
	CRectangle rect(3.0f, 4.0f);
	cout << rect.area() << endl;
	return 0;
}

