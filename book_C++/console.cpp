#include<iostream>
#include<string>
#include<cstring>
#include"console.h"
using namespace std;


Console::Console(const char* const &name, int col, int line)
{
	SetConsoleTitle(name);								//���ÿ���̨����
	system("mode con cols=100 lines=35");				//���ÿ�͸�
	hide_cursor();										//��ʼ���������
}

Console::~Console()
{
}

void Console::hide_cursor()//���ع��
{
	HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(h_GAME, &cursor_info);
}
void Console::show_cursor()//��ʾ���
{
	HANDLE h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME, &cursor_info);
	cursor_info.bVisible = true;
	SetConsoleCursorInfo(h_GAME, &cursor_info);
}
