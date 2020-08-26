// xingfu.zhou@zoho.com
// 
// Copyright (2020).



//
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
using namespace std;
[[noreturn]] void f ()
{
    cout << __FUNCTION__ << "  " << __LINE__ << endl;
    exit(3);
    cout << __FUNCTION__ << "  " << __LINE__ << endl;
}

int main()
{
    thread t(f);
    
    cout << __FUNCTION__ << "  " << __LINE__ << endl;
    this_thread::sleep_for(std::chrono::milliseconds(1000));
    t.join();
    return 0;
}