#pragma once

#include <vector>
#include <list>
#include <string>
#include <map>
#include <iostream>

class Tasking {

private:
    std::map<int , std::string>Tasks;
    int id;
public:

    Tasking(){id = 0;}
    
    void AddTask(const std::string task)
    {    
        id++;
        Tasks[id] = task;
    }

    void RemoveTask(int id)
    {
        Tasks.erase(id);
    }
    
    void showTasks()
    {
        for(auto it : Tasks)
        {
            std::cout << it.first << "-> " << it.second << std::endl;
        }
    }
};
