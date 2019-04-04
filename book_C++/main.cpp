#include<iostream>
#include<fstream>
#include<conio.h>	
#include<regex>						//正则表达式库，或许你可以用这个处理数据
#include"base64.h"
#include"console.h"	
using namespace std;

#define begin cout<<user.name<<""<<user.location<<">";		//模拟Linux....导航？
#define clear system("cls");

//初始化需要用到的全部图书和用户数据



int main() {
	Console window;		//初始化控制台
	//主界面
	cout << "\t\t\t\t\t图书管理系统" << endl;
	cout << "\t随机推荐：" << endl;
	cout << "\t\t\t\t******三本随机推荐的图书" << endl;
	cout << "\t\t\t\t******三本随机推荐的图书" << endl;
	cout << "\t\t\t\t******三本随机推荐的图书" << endl<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//设置绿色
	cout << "输入对应数字键进入,输入【q】退出" << endl<<endl;
	cout << "\t\t\t【1】登录\t\t【2】注册" << endl;
	//begin

	char flag;												
	while (flag = _getch()) {							//判断用户意图
		switch (flag) {
		case '1': {
			clear
				//执行校验
				//begin
				break;
		}
		case '2': {
			clear
				//执行注册服务后直接登录
				//begin
				break;
		}
		case 'q': {
			exit(0);
			break;
		}
		default:
			cout << "输入错误，再试一次" << endl;
			break;
		}
	}




	char z;
	cin >> z;
	return 0;
}