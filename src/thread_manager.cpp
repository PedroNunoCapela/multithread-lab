#include "../include/thread_manager.h"
#include "../include/tasks.h"
#include <iostream>

using namespace std;

ThreadManager::ThreadManager()
{
}
ThreadManager::~ThreadManager()
{
}

void ThreadManager::enqueueTask(function<void()> task)
{
    tasksToRun.push(task);
}
