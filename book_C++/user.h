#ifndef _USER_H
#define _USER_H
#include<string>
using namespace std;

class User
{
public:
	User(string="guest");
	~User();
	void changePlace(string);
	string getName();
	string getPlace();
private:
	string name;
	string place;
};


#endif // !_USER_H
