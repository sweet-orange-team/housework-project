#ifndef _CONSOLE_H
#define _CONSOLE_H
#include <windows.h>
#include <stdio.h>


class Console		//控制台类
{
public:
	Console(const char* const &name="图书管理系统-by charon and Yvein",int col=100,int line=35);
	~Console();
	void hide_cursor();									//隐藏光标
	void show_cursor();									//显示光标
	

private:
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);		//控制台输出句柄
	CONSOLE_CURSOR_INFO cursor;							//光标结构体
	
};


#endif // !_CONSOLE_H
