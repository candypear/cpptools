#include<iostream>
#include"../candyConsole.h"

int main()
{
	//改变标题
	CandyConsole::setTitle("this is test api");
	//按坐标打印字符串
	CandyConsole::print(0, 0, "字符串不换行测试");
	CandyConsole::println(0, 1, "字符串换行测试");
	//按坐标打印int
	CandyConsole::print(20, 0, 10);
	//按坐标打印double
	CandyConsole::print(20, 1, 1.5);
	//按坐标打印char
	CandyConsole::print(20, 2, 'A');
	//按颜色打印字符串
	CandyConsole::println(0, 2, "字符串换行测试",LIGHTRED);
	//暂停
	CandyConsole::pause();
	return 0;
}