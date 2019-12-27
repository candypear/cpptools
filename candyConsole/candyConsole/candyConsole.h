#pragma once
#include<string>
#include<Windows.h>

#define WHITE FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE
#define RED FOREGROUND_RED
#define LIGHTRED FOREGROUND_RED|FOREGROUND_INTENSITY 
#define GREEN FOREGROUND_GREEN 
#define LIGHTGREEN FOREGROUND_GREEN|FOREGROUND_INTENSITY  
#define BLUE FOREGROUND_BLUE 
#define LIGHTBLUE FOREGROUND_BLUE|FOREGROUND_INTENSITY  
#define YELLOW FOREGROUND_RED|FOREGROUND_GREEN
#define LIGHTYELLOW FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY
#define PINK FOREGROUND_RED|FOREGROUND_BLUE
#define PURPLE FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE

class  CandyConsole
{
public:
	static void setTitle(std::string title);
	static void setTitle(const char* title);
	static void pause();
	static void clear();
	static void exitProgram();
	static void delay_ms(int time);
	static void delay_s(int time);
	static void setPosition(int x, int y);
	static void println(int x,int y,std::string str);
	static void println(int x, int y, std::string str,int color);
	static void println(int x, int y,int number);
	static void println(int x, int y, int number,int color);
	static void println(int x, int y, double number);
	static void println(int x, int y, double number,int color);
	static void println(int x, int y, char str);
	static void println(int x, int y, char str,int color);
	static void print(int x, int y, std::string str);
	static void print(int x, int y, std::string str, int color);
	static void print(int x, int y, int number);
	static void print(int x, int y, int number,int color);
	static void print(int x, int y, double number);
	static void print(int x, int y, double number,int color);
	static void print(int x, int y, char str);
	static void print(int x, int y, char str, int color);
	static void setTextColor(int color);
private:

};
