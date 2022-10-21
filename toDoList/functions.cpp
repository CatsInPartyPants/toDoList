#include "functions.h"
#include <iostream>

void edit_task(Task* task)
{
	std::cout << "Enter task name: " << std::endl;
	std::getline(std::cin, task->name);
	std::cout << "Enter task priority(3 - high, 2 - standart, 1 - low): " << std::endl;
	std::cin >> task->priority;
	std::cout << "Enter task discription: " << std::endl;
	std::cin.get();
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
}

void make_todolist(Task* task)
{
	edit_task(task);
	task->next = NULL;
}