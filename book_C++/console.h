#ifndef _CONSOLE_H
#define _CONSOLE_H
#include <windows.h>
#include <stdio.h>



class Console		//控制台类,用于修改控制台各项参数
{
public:
	Console(const char* const &name="图书管理系统-by charon and Yvein",int col=100,int line=35);
	~Console();
	void cursor(bool _flag);									//显示或隐藏光标
	void setColor(char flag);

private:
	
};


#endif // !_CONSOLE_H
