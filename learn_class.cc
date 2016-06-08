 ///
 /// @file    learn_class.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 08:47:48
 ///


//在类定义时定义成员函数

#include <iostream>
#include <cstring>
using namespace std;

class computer
{
public:
	//在类定义的同时实现了3个成员函数
	void print()
	{
		cout << "品牌：" << brand << endl;
		cout << "价格：" << price << endl;
	}
	void SetBrand(const char * sz)
	{
		strcpy(brand,sz);  //字符串复制
	}
	void SetPrice(float pr)
	{
		price = pr;
	}
private:
	char brand [20];
	float price;
};

//#include "computer_class.h"  //包含了computer类的定义
int main()
{
	computer com1;  //声明创建一个类对象
	com1.SetPrice (5000);  
	com1.SetBrand ("Lenovo");
	com1.print();
	return 0;
}

