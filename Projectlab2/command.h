#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Command
{
public:
	string name;
	string country;
	string game;
	//3 4
	void setName(string _name);
	void setName(string _name, string _country, string _game);
	void setInformation(string _contact);
	void setInformation(string _contact, string _oponentName, string _teamMembers, int _number);
	void setDateOfMatch(string _dateOfMatch);
	void setTime(string _time);
	static Command readInfoFromFile();
	void writeInfoInFile();
	void show();
	int* allocRandomMemory();
	int getNumber();
private:
	string contact;
	string dateOfMatch;
	string time;
	string oponentName;
	string teamMembers;
	int number;
};

