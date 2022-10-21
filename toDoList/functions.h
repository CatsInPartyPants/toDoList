#ifndef _TODOLIST_H_
#define _TODOLIST_H_
#include <string>

enum { HIGH = 3, STANDART = 2, LOW = 1 };

struct Task {
	std::string name;
	int priority;
	std::string discription;
	struct {
		int day;
		int month;
		int year;
		int hour;
		int minutes;
	}date;
	Task* next;
};

void add_task(Task* task);

void delete_task(Task* task);

void edit_task(Task* task);

void find_task_by_name(Task* task);
void find_task_by_priority(Task* task);
void find_task_by_disctiption(Task* task);
void find_task_by_date(Task* task);

void show_tasks_for_day(Task* task);
void show_tasks_for_week(Task* task);
void show_tasks_for_month(Task* task);

#endif