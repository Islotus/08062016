 ///
 /// @file    learn_class1.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 09:09:03
 ///

//在类定义的外部定义成员函数

class computer //类定义，起到接口作用
{
public:
	//3个public成员函数的原型声明
	void print();
	void SetBrand(const char *sz);
	void SetPrice(float pr);
private:
	char brand [20];
	float price;
};

#include <iostream>
#include <cstring>
using namespace std;

void computer :: print()  //成员函数的实现，注意作用域限定符的使用
{
	cout << "品牌：" << brand << endl;
	cout << "价格：" << price << endl;
}

void computer :: SetBrand(const char *sz)
{
	strcpy (brand,sz);  //字符串复制
}

void computer :: SetPrice (float pr)
{	price = pr;
}

int main()
{
	computer com1;
	com1.SetPrice (5000);
	com1.SetBrand ("Lenovo");
	com1.print();  
	return 0;
}


