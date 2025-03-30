#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "Task.h"
#include "TaskManager.h"
using namespace std;

int main()
{
	TaskManager taskManager;
	unsigned int choice=-1;
	cout << "Task Manager,proiect personal de Suciu Dinu Stefan\n";
	cout << "Booting up";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\033[2J\033[H"; //ANSI escape sequence to clear screen
	cout << "Task Manager,proiect personal de Suciu Dinu Stefan\n";
	cout << "Booting up";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::seconds(1));
	cout << ".";
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "\033[2J\033[H";

	cout << "Task Manager,proiect personal de Suciu Dinu Stefan\n";
	cout << "------------------------------------------\n";
	cout << "|\t 1.Adaugare task nou\t\t |\n";
	cout << "|\t 2.Afisare taskuri\t\t |\n";
	cout << "|\t 3.Modificare task\t\t |\n";
	cout << "|\t 4.Stergere task\t\t |\n";
	cout << "|\t 5.Recomandare task\t\t |\n";
	cout << "|\t 6.Iesire din aplicatie\t\t |\n";
	cout << "|\t Introduceti optiunea dorita\t |\n";
	cout << "------------------------------------------\n";
	char answer;
	while (choice)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			taskManager.AddTask();
			cout << "\nMai doresti sa faci o actiune? Y/N\n";
			cin >> answer;
			while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
			{
				cout << "Optiune invalida,reincearca o alta variabila (Y sau N)\n";
				cin >> answer;
			}
			if (answer == 'N' || answer == 'n')
				taskManager.Exit();
			else if (answer == 'Y' || answer == 'y')
			{
				cout << "\033[2J\033[H";
				cout << "\n------------------------------------------\n";
				cout << "|\t 1.Adaugare task nou\t\t |\n";
				cout << "|\t 2.Afisare taskuri\t\t |\n";
				cout << "|\t 3.Modificare task\t\t |\n";
				cout << "|\t 4.Stergere task\t\t |\n";
				cout << "|\t 5.Recomandare task\t\t |\n";
				cout << "|\t 6.Iesire din aplicatie\t\t |\n";
				cout << "|\t Introduceti optiunea dorita\t |\n";
				cout << "------------------------------------------\n";
			}
			break;
		case 2:
			taskManager.ShowTasks();
			cout << "\nMai doresti sa faci o actiune? Y/N\n";
			cin >> answer;
			while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
			{
				cout << "Optiune invalida,reincearca o alta variabila (Y sau N)\n";
				cin >> answer;
			}
			if (answer == 'N' || answer == 'n')
				taskManager.Exit();
			else if (answer == 'Y' || answer == 'y')
			{
				cout << "\033[2J\033[H";
				cout << "\n------------------------------------------\n";
				cout << "|\t 1.Adaugare task nou\t\t |\n";
				cout << "|\t 2.Afisare taskuri\t\t |\n";
				cout << "|\t 3.Modificare task\t\t |\n";
				cout << "|\t 4.Stergere task\t\t |\n";
				cout << "|\t 5.Recomandare task\t\t |\n";
				cout << "|\t 6.Iesire din aplicatie\t\t |\n";
				cout << "|\t Introduceti optiunea dorita\t |\n";
				cout << "------------------------------------------\n";
			}
			break;
		case 3:
			taskManager.ModifyTask();
			cout << "\nMai doresti sa faci o actiune? Y/N\n";
			cin >> answer;
			while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
			{
				cout << "Optiune invalida,reincearca o alta variabila (Y sau N)\n";
				cin >> answer;
			}
			if (answer == 'N' || answer == 'n')
				taskManager.Exit();
			else if (answer == 'Y' || answer == 'y')
			{
				cout << "\033[2J\033[H";
				cout << "\n------------------------------------------\n";
				cout << "|\t 1.Adaugare task nou\t\t |\n";
				cout << "|\t 2.Afisare taskuri\t\t |\n";
				cout << "|\t 3.Modificare task\t\t |\n";
				cout << "|\t 4.Stergere task\t\t |\n";
				cout << "|\t 5.Recomandare task\t\t |\n";
				cout << "|\t 6.Iesire din aplicatie\t\t |\n";
				cout << "|\t Introduceti optiunea dorita\t |\n";
				cout << "------------------------------------------\n";
			}
			break;
		case 4:
			taskManager.DeleteTask();
			cout << "\nMai doresti sa faci o actiune? Y/N\n";
			cin >> answer;
			while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
			{
				cout << "Optiune invalida,reincearca o alta variabila (Y sau N)\n";
				cin >> answer;
			}
			if (answer == 'N' || answer == 'n')
				taskManager.Exit();
			else if (answer == 'Y' || answer == 'y')
			{
				cout << "\033[2J\033[H";
				cout << "\n------------------------------------------\n";
				cout << "|\t 1.Adaugare task nou\t\t |\n";
				cout << "|\t 2.Afisare taskuri\t\t |\n";
				cout << "|\t 3.Modificare task\t\t |\n";
				cout << "|\t 4.Stergere task\t\t |\n";
				cout << "|\t 5.Recomandare task\t\t |\n";
				cout << "|\t 6.Iesire din aplicatie\t\t |\n";
				cout << "|\t Introduceti optiunea dorita\t |\n";
				cout << "------------------------------------------\n";
			}
			break;
		case 5:
			taskManager.RecommendTask();
			cout << "\nMai doresti sa faci o actiune? Y/N\n";
			cin >> answer;
			while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
			{
				cout << "Optiune invalida,reincearca o alta variabila (Y sau N)\n";
				cin >> answer;
			}
			if (answer == 'N' || answer == 'n')
				taskManager.Exit();
			else if (answer == 'Y' || answer == 'y')
			{
				cout << "\033[2J\033[H";
				cout << "\n------------------------------------------\n";
				cout << "|\t 1.Adaugare task nou\t\t |\n";
				cout << "|\t 2.Afisare taskuri\t\t |\n";
				cout << "|\t 3.Modificare task\t\t |\n";
				cout << "|\t 4.Stergere task\t\t |\n";
				cout << "|\t 5.Recomandare task\t\t |\n";
				cout << "|\t 6.Iesire din aplicatie\t\t |\n";
				cout << "|\t Introduceti optiunea dorita\t |\n";
				cout << "------------------------------------------\n";
			}
			break;
		case 6:
			taskManager.Exit();
			break;
		default:
			cout << "Optiune invalida,alege o optiune corespunzatoare\n";
			cin >> choice;
			break;
		}
	}
	return 0;
}