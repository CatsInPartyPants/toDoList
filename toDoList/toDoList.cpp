#include <iostream>

#include "functions.h"

int main()
{
    Task* toDoList = new Task;
    make_todolist(toDoList);

    toDoList = add_task(toDoList);
    toDoList = add_task(toDoList);
    toDoList = add_task(toDoList);
    show_all_tasks(toDoList);

}
