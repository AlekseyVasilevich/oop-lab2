#include "command.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Command::setName(string _name)
{
	name = _name;
}

void Command::setName(string _name, string _country, string _game)
{
	name = _name;
	country = _country;
	game = _game;
}

void Command::setInformation(string _contact)
{
	contact = _contact;
}

void Command::setInformation(string _contact, string _oponentName, string _teamMembers, int _number)
{
	contact = _contact;
	oponentName = _oponentName;
	teamMembers = _teamMembers;
	number = _number;
}

void Command::setDateOfMatch(string _dateOfMatch)
{
	dateOfMatch = _dateOfMatch;
}

void Command::setTime(string _time)
{
	time = _time;
}

Command Command::readInfoFromFile()
{
	ifstream in("command.txt");
	Command command;
	in >> command.name;
	in >> command.country;
	in >> command.game;
	in >> command.contact;
	in >> command.dateOfMatch;
	in >> command.time;
	in >> command.oponentName;
	in >> command.teamMembers;
	return command;
}

void Command::writeInfoInFile()
{
	ofstream out("command.txt");
	out << name << endl;
	out << country << endl;
	out << game << endl;
	out << contact << endl;
	out << dateOfMatch << endl;
	out << time << endl;
	out << oponentName << endl;
	out << teamMembers << endl;
}

void Command::show()
{
	cout << name << endl;
	cout << country << endl;
	cout << game << endl;
	cout << contact << endl;
	cout << dateOfMatch << endl;
	cout << time << endl;
	cout << oponentName << endl;
	cout << teamMembers << endl;
}

int* Command::allocRandomMemory()
{
	int* arr = new int[5];
	return arr;
}

int Command::getNumber()
{
	return number;
}