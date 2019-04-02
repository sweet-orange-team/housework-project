#include <windows.h>
#include <stdio.h>
#include <conio.h>

int mian(void)

{

	HANDLE hOut;

	CONSOLE_SCREEN_BUFFER_INFO bInfo; // 存储窗口信息

	COORD pos = { 0, 0 };

	// 获取标准输出设备句柄

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	// 获取窗口信息

	GetConsoleScreenBufferInfo(hOut, &bInfo);

	printf("\n\nThe soul selects her own society\n");

	printf("Then shuts the door\n");

	printf("On her devine majority\n");

	printf("Obtrude no more\n\n");

	_getch();

	// 向窗口中填充字符以获得清屏的效果

	FillConsoleOutputCharacter(hOut, ' ', bInfo.dwSize.X * bInfo.dwSize.Y, pos, NULL);

	// 关闭标准输出设备句柄

	CloseHandle(hOut);

	return 0;

}



/*程序中，COORD和CONSOLE_SCREEN_BUFFER_ INFO是wincon.h定义的控制台结构体类型，其原型如下：*/

// 坐标结构体

typedef struct _COORD {

	SHORT X;

	SHORT Y;

} COORD;

// 控制台窗口信息结构体

typedef struct _CONSOLE_SCREEN_BUFFER_INFO {

	COORD dwSize; // 缓冲区大小

	COORD dwCursorPosition; // 当前光标位置

	WORD wAttributes; // 字符属性

	SMALL_RECT srWindow; // 当前窗口显示的大小和位置

	COORD dwMaximumWindowSize; // 最大的窗口缓冲区大小

} CONSOLE_SCREEN_BUFFER_INFO;

//还需要说明的是，虽然在C++中，iostream.h定义了cin和cout的标准输入和输出流对象。但它们只能实现基本的输入输出 操作，
//对于控制台窗口界面的控制却无能为力，而且不能与stdio.h和conio.h友好相处，因为iostream.h和它们是C++两套不同的输入
//输出操作方式，使用时要特别注意。

