 ///
 /// @file    computer_class.h
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 08:53:04
 ///
 
class computer
{
	char brand [20];  //默认为private类型
public：              //这里的private不能省略，因为不是在类定义的开始位置
	void print();  
private:
	float price;
public:
	void SetBrand (char * sz);
	void SetBrand (float pr);
};

