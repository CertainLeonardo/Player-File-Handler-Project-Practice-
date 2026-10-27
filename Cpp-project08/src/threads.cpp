#include <thread>
#include <iostream>

void workerFunction()
{
    using std::cout;

    cout << "Worker thread is running! \n";
}

void runWorker()
{
    std::thread worker(workerFunction);

    worker.join();
}