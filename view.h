#pragma once
#include "Task.h"

class View
{

private:

    Tasking todo;

public:
    void add_task()
    {
        std::cout << "enter the task that you want to add: " << std::endl;
        std::string task;
        std::cin >> task;
        todo.AddTask(task);
    }
    void remove_task()
    {
        std::cout << "enter the id of the  task: " << std::endl;
        int id;
        std::cin >> id;
        todo.RemoveTask(id);
    }

    void startPoint()
    {
        int choice = -1;
        while(choice != 0)
        {
            std::cout << "enter the choice between [1:3] press 0 to exit" << std::endl;
            std::cin >> choice;

            switch(choice)
            {
                case 1:
                    add_task();
                    break;
                case 2:
                    remove_task();
                    break;
                case 3:
                    todo.showTasks();
                    break;
            }
        }
    }

};