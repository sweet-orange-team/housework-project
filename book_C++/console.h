#ifndef _CONSOLE_H
#define _CONSOLE_H
#include <windows.h>
#include <stdio.h>



class Console		//����̨��,�����޸Ŀ���̨�������
{
public:
	Console(const char* const &name="ͼ�����ϵͳ-by charon and Yvein",int col=100,int line=35);
	~Console();
	void cursor(bool _flag);									//��ʾ�����ع��
	void setColor(char flag);

private:
	
};


#endif // !_CONSOLE_H
