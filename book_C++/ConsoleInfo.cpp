#include <windows.h>
#include <stdio.h>
#include <conio.h>

int mian(void)

{

	HANDLE hOut;

	CONSOLE_SCREEN_BUFFER_INFO bInfo; // �洢������Ϣ

	COORD pos = { 0, 0 };

	// ��ȡ��׼����豸���

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	// ��ȡ������Ϣ

	GetConsoleScreenBufferInfo(hOut, &bInfo);

	printf("\n\nThe soul selects her own society\n");

	printf("Then shuts the door\n");

	printf("On her devine majority\n");

	printf("Obtrude no more\n\n");

	_getch();

	// �򴰿�������ַ��Ի��������Ч��

	FillConsoleOutputCharacter(hOut, ' ', bInfo.dwSize.X * bInfo.dwSize.Y, pos, NULL);

	// �رձ�׼����豸���

	CloseHandle(hOut);

	return 0;

}



/*�����У�COORD��CONSOLE_SCREEN_BUFFER_ INFO��wincon.h����Ŀ���̨�ṹ�����ͣ���ԭ�����£�*/

// ����ṹ��

typedef struct _COORD {

	SHORT X;

	SHORT Y;

} COORD;

// ����̨������Ϣ�ṹ��

typedef struct _CONSOLE_SCREEN_BUFFER_INFO {

	COORD dwSize; // ��������С

	COORD dwCursorPosition; // ��ǰ���λ��

	WORD wAttributes; // �ַ�����

	SMALL_RECT srWindow; // ��ǰ������ʾ�Ĵ�С��λ��

	COORD dwMaximumWindowSize; // ���Ĵ��ڻ�������С

} CONSOLE_SCREEN_BUFFER_INFO;

//����Ҫ˵�����ǣ���Ȼ��C++�У�iostream.h������cin��cout�ı�׼�������������󡣵�����ֻ��ʵ�ֻ������������ ������
//���ڿ���̨���ڽ���Ŀ���ȴ����Ϊ�������Ҳ�����stdio.h��conio.h�Ѻ��ദ����Ϊiostream.h��������C++���ײ�ͬ������
//���������ʽ��ʹ��ʱҪ�ر�ע�⡣

