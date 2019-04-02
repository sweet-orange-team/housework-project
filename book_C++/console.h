#ifndef _CONSOLE_H
#define _CONSOLE_H
#include <windows.h>
#include <stdio.h>


class Console		//����̨��
{
public:
	Console(const char* const &name="ͼ�����ϵͳ-by charon and Yvein",int col=100,int line=35);
	~Console();
	void hide_cursor();									//���ع��
	void show_cursor();									//��ʾ���
	

private:
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);		//����̨������
	CONSOLE_CURSOR_INFO cursor;							//���ṹ��
	
};


#endif // !_CONSOLE_H
