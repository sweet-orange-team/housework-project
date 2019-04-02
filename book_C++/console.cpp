#include<iostream>
#include<string>
#include<cstring>
#include"console.h"
using namespace std;


Console::Console(const char* const &name, int col, int line)
{
	SetConsoleTitle(name);								//设置控制台标题
	system("mode con cols=100 lines=35");				//设置宽和高
	hide_cursor();										//初始化光标隐藏
}

Console::~Console()
{
}

void Console::hide_cursor()//隐藏光标
{
	HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(h_GAME, &cursor_info);
}
void Console::show_cursor()//显示光标
{
	HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME, &cursor_info);
	cursor_info.bVisible = true;
	SetConsoleCursorInfo(h_GAME, &cursor_info);
}
