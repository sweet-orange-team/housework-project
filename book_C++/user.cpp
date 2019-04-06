#include<iostream>
#include<string>
using namespace std;
#include"user.h"

User::User(string _name)
{
	name = _name;
	place = "main";
}

User::~User()
{
}

void User::changePlace(string _place)
{
	place = place;
}

string User::getPlace()
{
	return place;
}

string User::getName(){
	return name;
}