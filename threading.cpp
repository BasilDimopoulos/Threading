#include <iostream>
#include <thread>
#include "helper_functions.hpp"

//There are two type of concurent programming modules
//Multiprocessing, where each process has one thread that communicate with each other through commen routes, eg pipes, files ect
//Multithreading, one process contains two or more threads, that share memory. However cannot run on a distributed system eg telecommunications

void function_1()
{
    cout << "Hello World" << endl;
}

int main()
{
    thread t1(function_1); //t1 starts running
    t1.join();             //main thread waits for t1 to finish
    return 0;
}
