#include<iostream>
#include<conio.h>	
#include<regex>			//������ʽ�⣬����������������������
#include"console.h"	
using namespace std;
#define begin cout<<user.name<<""<<user.location<<">";		//ģ��....������
#define clear system("cls");
/*
��ʼ����Ҫ�õ���ȫ��ͼ������
*/

int main() {
	Console window;		//��ʼ������̨

	//������
	cout << "\t\t\t\t\tͼ�����ϵͳ" << endl;
	cout << "\t����Ƽ���" << endl;
	cout << "\t\t\t\t******��������Ƽ���ͼ��" << endl;
	cout << "\t\t\t\t******��������Ƽ���ͼ��" << endl;
	cout << "\t\t\t\t******��������Ƽ���ͼ��" << endl<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);//������ɫ
	cout << "�����Ӧ���ּ�����,���롾q���˳�" << endl<<endl;
	cout << "\t\t\t��1����¼\t\t��2��ע��" << endl;
	//begin

	char flag;												
	while (flag = _getch()) {							//�ж��û���ͼ
		switch (flag) {
		case '1': {
			clear
				//ִ��У��
				//begin
				break;
		}
		case '2': {
			clear
				//ִ��ע������ֱ�ӵ�¼
				//begin
				break;
		}
		case 'q': {
			exit(0);
			break;
		}
		default:
			cout << "�����������һ��" << endl;
			break;
		}
	}




	int a;
	cin >> a;
	return 0;
}