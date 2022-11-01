#include "functions.h"
#include <iostream>

void main_menu()
{
	int choise;
	do {
		std::cout << "\t\t\"To-Do List\"\n";
		std::cout << "Main menu:\n\n";
		std::cout << "[1] Show tasks in the to-do list.\n";
		std::cout << "[2] Add a new task to the to-do list.\n";
		std::cout << "[3] Delete a task from the to-do list.\n";
		std::cout << "[4] Edit a task in the to-do list.\n";
		std::cout << "[5] Save to-do list to the file.\n";
		std::cout << "[0] Exit.\n";
		std::cin >> choise;

	} while (choise != 0);
}

Task* add_task(Task* task)
{
	Task* tmp = new Task;
	edit_task(tmp);
	tmp->next = task;
	return tmp;
}

void edit_task(Task* task)
{
	std::cout << "Enter task name: " << std::endl;
	std::getline(std::cin, task->name);
	std::cout << "Enter task priority(3 - high, 2 - standart, 1 - low): " << std::endl;
	std::cin >> task->priority;
	std::cin.get();
	std::cout << "Enter task discription: " << std::endl;
	std::getline(std::cin, task->discription);

	std::cout << "Now enter task date. " << std::endl;
	std::cout << "First of all enter task day: " << std::endl;
	std::cin >> task->date.day;
	std::cout << "Enter task month: " << std::endl;
	std::cin >> task->date.month;
	std::cout << "Enter task year: " << std::endl;
	std::cin >> task->date.year;
	std::cout << "Enter task hour: " << std::endl;
	std::cin >> task->date.hour;
	std::cout << "Enter task minutes: " << std::endl;
	std::cin >> task->date.minutes;
	std::cin.get();
	
}

void make_todolist(Task* task)
{
	edit_task(task);
	task->next = NULL;
}

void show_all_tasks(Task* task)
{
	int number_of_task = 1;

	Task* iterator;
	iterator = task;

	do 
	{
		std::cout << std::endl;
		std::cout << number_of_task << ". ";
		std::cout << "Name of the task: " << iterator->name << std::endl;
		std::cout << "Date:" << iterator->date.day << "." << iterator->date.month << "." << iterator->date.year << " " << iterator->date.hour << ":" << iterator->date.minutes << std::endl;
		std::cout << "Discription: " << iterator->discription << std::endl;
		std::cout << "Priority: " << iterator->priority << std::endl;
		iterator = iterator->next;
		std::cout << std::endl;
		std::cout << std::endl;
	} while (iterator->next != NULL);
}