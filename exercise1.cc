 ///
 /// @file    exercise1.cc
 /// @author  Islotus(2791201278@qq.com)
 /// @date    2016-06-08 17:33:18
 ///

//创建文件student.cpp，并在文件中定义SetInfo和Display成员函数的实现

#include <iostream>
#include <cstring>
using std :: cout;
using std :: cin;
using std :: endl;
//using namespace std;
class CStudent
{
public:
	void SetInfo (int id,const char * pszName);  //将学生ID和姓名赋值给成员变量
	void Display ();  //打印出成员变量
private:
	int _m_ild;
	char _m_szName [32];
};

void CStudent :: SetInfo (int ild, const char * pszName)
{
	_m_ild = ild;
	strcpy (_m_szName, pszName);
}

void CStudent :: Display ()
{
	cout << "the student named" << _m_szName 
		<< "s id is" << _m_ild << endl;
}

//最后在main.cc中使用该类
int main()
{
	//栈中实现
	CStudent stud;
	stud.SetInfo (3, "Tom" );
	stud.Display ();

	//堆中实现
	CStudent * pStud = new CStudent;
	pStud -> SetInfo (0, "Bill" );
	pStud -> Display();

	(* pStud).Display ();

	delete pStud;  //释放申请的空间
	pStud = NULL;  //指针赋空值
	
//	return 0;
}
