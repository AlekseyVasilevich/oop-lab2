#include "command.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <time.h>

using namespace std;

int main()
{
	//5 6
	Command command1, command2, command3, command4, command5;
	Command* dynamicCommand1 = new Command();
	Command* dynamicCommand2 = new Command();
	Command* dynamicCommand3 = new Command();
	Command* dynamicCommand4 = new Command();
	Command* dynamicCommand5 = new Command();
	Command commands[5];
	commands[0] = command1;
	commands[1] = command2;
	commands[2] = command3;
	commands[3] = command4;
	commands[4] = command5;
	Command* dynamicCommands[5];
	dynamicCommands[0] = dynamicCommand1;
	dynamicCommands[1] = dynamicCommand2;
	dynamicCommands[2] = dynamicCommand3;
	dynamicCommands[3] = dynamicCommand4;
	dynamicCommands[4] = dynamicCommand5;
	//7 8
	for (int i = 0; i < 5; i++)
	{
		commands[i].setName("asdf", "Ukraine", "football");
		commands[i].setInformation("374592345", "qwerty", "1fgdf", rand() % 20);
		commands[i].setDateOfMatch("11.11.1111");
		commands[i].setTime("22:30");
		dynamicCommands[i]->setName("asdf", "Ukraine", "football");
		dynamicCommands[i]->setInformation("374592345", "qwerty", "1fgdf", rand() % 20);
		dynamicCommands[i]->setDateOfMatch("11.11.1111");
		dynamicCommands[i]->setTime("22:30");
	}
	Command command = commands[1];
	command.writeInfoInFile();
	Command anotherCommand = Command::readInfoFromFile();
	anotherCommand.show();

	int* array = command.allocRandomMemory();
	for (int i = 0; i < 5; i++)
	{
		array[i] = commands[i].getNumber();
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (array[j] < array[i])
			{
				swap(array[i], array[j]);
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}