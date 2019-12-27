#include"candyConsole.h"
#include<iostream>
#include<cstdlib>

void CandyConsole::setTitle(std::string title)
{
	SetConsoleTitle(title.c_str());
}

void CandyConsole::setTitle(const char* title)
{
	SetConsoleTitle(title);
}

void CandyConsole::pause()
{
	system("pause");
}

void CandyConsole::clear()
{
	system("cls");
}

void CandyConsole::exitProgram()
{
	exit(0);
}

void CandyConsole::delay_ms(int time)
{
	Sleep(time);
}

void CandyConsole::delay_s(int time)
{
	Sleep(time * 1000);
}

void CandyConsole::setPosition(int x, int y)
{
	HANDLE hout;
	COORD coord;
	coord.X = x;
	coord.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, coord);
}

void CandyConsole::println(int x, int y, std::string str)
{
	setPosition(x, y);
	std::cout << str << std::endl;
}

void CandyConsole::println(int x, int y, std::string str, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << str << std::endl;
	setTextColor(WHITE);
}

void CandyConsole::println(int x, int y, int number)
{
	setPosition(x, y);
	std::cout << number << std::endl;
}

void CandyConsole::println(int x, int y, int number, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << number << std::endl;
	setTextColor(WHITE);
}

void CandyConsole::println(int x, int y, double number)
{
	setPosition(x, y);
	std::cout << number << std::endl;
}

void CandyConsole::println(int x, int y, double number, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << number << std::endl;
	setTextColor(WHITE);
}

void CandyConsole::println(int x, int y, char str)
{
	setPosition(x, y);
	std::cout << str << std::endl;
}

void CandyConsole::println(int x, int y, char str, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << str << std::endl;
	setTextColor(WHITE);
}

void CandyConsole::print(int x, int y, std::string str)
{
	setPosition(x, y);
	std::cout << str;
}

void CandyConsole::print(int x, int y, std::string str, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << str;
	setTextColor(WHITE);
}

void CandyConsole::print(int x, int y, int number)
{
	setPosition(x, y);
	std::cout << number;
}

void CandyConsole::print(int x, int y, int number, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << number;
	setTextColor(WHITE);
}

void CandyConsole::print(int x, int y, double number)
{
	setPosition(x, y);
	std::cout << number;
}

void CandyConsole::print(int x, int y, double number, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << number;
	setTextColor(WHITE);
}

void CandyConsole::print(int x, int y, char str)
{
	setPosition(x, y);
	std::cout << str;
}

void CandyConsole::print(int x, int y, char str, int color)
{
	setPosition(x, y);
	setTextColor(color);
	std::cout << str;
	setTextColor(WHITE);
}

void CandyConsole::setTextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//设置三色相加
}
