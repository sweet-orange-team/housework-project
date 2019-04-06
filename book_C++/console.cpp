#include<iostream>//这一页老是报错.............但还跑得通？？？？
#include<string>
#include<cstring>
using namespace std;
#include"console.h"

Console::Console(const char* const &name, int col, int line)
{
	SetConsoleTitle(name);								//设置控制台标题
	system("mode con cols=100 lines=35");				//设置宽和高
	cursor(true);										//初始化光标隐藏
}

Console::~Console()
{
}

void Console::cursor(bool flag)//显示或者隐藏光标
{
	HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME, &cursor_info);
	cursor_info.bVisible = flag;
	SetConsoleCursorInfo(h_GAME, &cursor_info);
}

void Console::setColor(char flag)
{
	/*enum color
	{
		black, white, red, green, blue, yellow, pink
	};*/
	switch (flag)
	{
	case 'o':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY); break;
	case 'w':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN | FOREGROUND_BLUE); break;
	case 'r':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED); break;
	case 'g':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN); break;
	case 'b':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE); break;
	case 'y':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN); break;
	case 'p':SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_BLUE); break;
	default:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY); 
		break;
	}
}

