#pragma once
#include <thread>
#include <queue>
#include <vector>
#include <functional>

class ThreadManager
{
public:
    ThreadManager();
    ~ThreadManager();

    void enqueueTask(std::function<void()> task);

private:
    std::vector<std::thread> threadWorkers;     // vector of thread workers that take tasks from the queue and execute them
    std::queue<std::function<void()>> tasksToRun;

    std::mutex mut;
    std::condition_variable cv;
    bool stop = false;

};

