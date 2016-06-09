 ///
 /// @file    object_declaration.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 17:14:36
 ///


class computer
{
public:
	void print ();
	void SetBrand (const char * sz );
	void SetPrice (float pr );
private:
	char _brand [20];
	float _price;
};  //不能忘记;



#include <iostream>
#include <cstring>

using namespace std;

void computer :: print()
{
	cout << "品牌：" << _brand << endl;
	cout << "价格：" << _price << endl;
}

void computer :: SetBrand (const char * sz)
{
	strcpy(_brand, sz);
}

void computer :: SetPrice (float pr)
{
	_price = pr;
}

int main()
{
	computer com1;
	com1.SetBrand ("lenovo");
	com1.SetPrice (8000);
	com1.print ();
	return 0;
}

